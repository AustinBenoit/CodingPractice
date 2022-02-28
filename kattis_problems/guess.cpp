#include <iostream>
#include <string>
#include <cmath>

class Number{
private:
  int min, max, guess;

  void upper(){
    min = guess;
    guess =  (min + max)/2;
  }
  void lower(){
    max = guess;
    guess =(min + max)/2;
  }

public:
  Number(int mi, int ma){
    min = mi;
    max = ma;
    guess = max / 2;
  }

  void print_guess(){
    std::cout<<guess<<std::endl;
  }

  int get_guess(){ return guess;}

  void higher_lower(std::string str){
    if(str == "higher"){
      upper();
    }else{
      lower();
    }
  }
};

int main() {
  std::string input;
  Number guess(1, 1001);

  guess.print_guess();

  std::cin>>input;
  guess.higher_lower(input);


  while(input != "correct"){

    std::cout<<guess.get_guess()<<std::endl;
    std::cin>>input;
    guess.higher_lower(input);
  }
}