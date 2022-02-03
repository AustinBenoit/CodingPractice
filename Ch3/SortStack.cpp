#include <stack>
#include <iostream>

template <typename T>
void Sort_Stack (std::stack<T>& s) {
  std::stack<T> swap_stack;

  while (!s.empty()){
    if (swap_stack.empty()) {
      swap_stack.push(s.top());
      s.pop();
      continue;
    }

    if (s.top() >= swap_stack.top()) {
      swap_stack.push(s.top());
      s.pop();
      continue;
    } else {
      T temp {s.top()};
      s.pop();
      // find where it does fit by revers pops
      while (!swap_stack.empty() && temp < swap_stack.top()) {
	s.push(swap_stack.top());
	swap_stack.pop();
      }
      swap_stack.push(temp);
    }
  }

  while (!swap_stack.empty()) {
    s.push(swap_stack.top());
    swap_stack.pop();
  }
}

template <typename T>
void Print_Stack (std::stack<T> s) {
  while(!s.empty()) {
    std::cout<<s.top()<<std::endl;
    s.pop();
  }
}

int main () {
  std::stack<int> s;
  for (auto a :{10, 3, 5, 10, 11, 4, 1, 7, 8, 1234, 1, 3, 4, 80}) {
    s.push(a);
  }
  Print_Stack(s);
  std::cout<<std::endl;
  Sort_Stack(s);
  Print_Stack(s);
};
