#include <utility>
#include <list>
#include <iostream>
#include <string>

enum class Breed {cat, dog};

class Shelter {
private:
  std::list<std::pair<Breed, std::string>> in_shelter;

public:
  Shelter (std::initializer_list<std::pair<Breed, std::string>> ls) : in_shelter{ls} {};

  void enqeue (Breed b, std::string name) {
    std::pair<Breed, std::string> animal = std::make_pair(b, name);
    in_shelter.push_back(animal);
  }

  std::string dequeueAny () {
    std::pair<Breed, std::string> animal = in_shelter.front();
    in_shelter.pop_front();
    return animal.second;
  }

  std::string dequeueDog () {
    for (auto a : in_shelter) {
      if (a.first == Breed::dog) {
	in_shelter.remove(a);
	return a.second;
      }
    }
    return "";
  }
  
  std::string dequeueCat () {
    for (auto a : in_shelter) {
      if (a.first == Breed::cat) {
	in_shelter.remove(a);
	return a.second;
      }
    }
    return "";
  }
};

int main () {
  Shelter a {std::make_pair(Breed::cat, "baz"),
	     std::make_pair(Breed::cat, "bar"),
	     std::make_pair(Breed::dog, "foo"),
	     std::make_pair(Breed::cat, "alice"),
	     std::make_pair(Breed::dog, "eve"),
	     std::make_pair(Breed::cat, "bob"),
	     std::make_pair(Breed::cat, "tim"),
	     std::make_pair(Breed::dog, "mr.man")};
  std::cout<< a.dequeueAny()<<std::endl;
  std::cout<< a.dequeueDog()<<std::endl;
  std::cout<< a.dequeueAny()<<std::endl;
  std::cout<< a.dequeueCat()<<std::endl;
  std::cout<< a.dequeueCat()<<std::endl;
  a.enqeue(Breed::dog, "hugo");
  std::cout<< a.dequeueDog()<<std::endl;
  std::cout<< a.dequeueDog()<<std::endl;
  std::cout<< a.dequeueDog()<<std::endl;
}
