#include <vector>
#include <iostream>


template <typename T>
class StackonStack {
private:
  int max_stack_;
  std::vector<std::vector<T>> stack_stack;
public:
  StackonStack (int max, std::initializer_list<T> ls) : max_stack_(max) {
    for (auto& i : ls) {
      push(i);
    }
  }

  void push (T i) {
    // get the current stack
    int curr_stack = stack_stack.size() - 1;

    if (curr_stack == -1) {
      stack_stack.push_back(std::vector<T>{});
      curr_stack = 0;
    }

    // need to handle the stack being empty
    
    if (stack_stack[curr_stack].size() < max_stack_){
      stack_stack[curr_stack].push_back(i);
    } else {
      // create the next new stack
      stack_stack.push_back(std::vector<T>{i});
    }
  }

  T pop () {
    int curr_stack = stack_stack.size() - 1;
    T ret_val = stack_stack[curr_stack].back();
    stack_stack[curr_stack].pop_back();
    // remove empty unneeded stack
    if (stack_stack[curr_stack].size() == 0 ) {
      stack_stack.erase(stack_stack.begin() + curr_stack);
    }

    return ret_val;
  }

  void printStacks() {
    for (auto& v : stack_stack) {
      for (auto& i : v) {
	std::cout<<i<<" ";
      }
      std::cout<<std::endl;
    }
  }
};

int main () {
  StackonStack<int> ss(4, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14});
  ss.printStacks();
  std::cout<<std::endl;
  std::cout<<std::endl;
  ss.pop();
  ss.pop();
  ss.printStacks();
  std::cout<<std::endl;
  std::cout<<std::endl;
  ss.pop();
  ss.printStacks();
}
