#include <iostream>
#include <vector>
#include <utility>

template <typename T>
class StackMin {
private:
  std::vector<std::pair<T, T>> stack;

public:
  StackMin () : stack({}) {}

  StackMin (std::initializer_list<T> l) : stack({}) {
    for (auto& i : l){
      this->push(i);
    }
  }

  void push (T value) {
    T min;
    if (stack.size() != 0){
      min = this->min();
      if (min > value) {
	min = value;
      }
    } else {
      min = value;
    }
    stack.push_back(std::make_pair(value, min));
  }

  T pop () {
      auto sm = stack.back();
      stack.pop_back();
      return sm.first;
  }

  T min () {
    auto sm = stack.back();
    return sm.second;
  }

  void print () {
    for (auto& v : stack) {
      std::cout<<v.first<<" "<<v.second<<std::endl;
    }
    std::cout<<std::endl;
  }
};

int main () {
  StackMin<int> smi{};
  smi.push(10);
  smi.push(8);
  smi.push(11);
  smi.push(6);
  smi.print();
  smi.pop();
  smi.print();

  StackMin<double> smd {1.1, 10.0, 9.9, 0.5, 100.0};
  smd.print();
}
