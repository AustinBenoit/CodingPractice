#include <stack>
#include <iostream>

template <typename T>
class QueueStack {
private:
  std::stack<T> new_elem_;
  std::stack<T> old_elem_;

public:
  QueueStack() : new_elem_{}, old_elem_{} {}
  void push (T elem) {
    new_elem_.push(elem);
  }

  T pop () {
    // Should throw and error here if new_elem is also empty.
    if (old_elem_.empty()) {
      // Should throw and error here if new_elem is also empty.
      // know that we need to pop everything off the new stack
      while (!new_elem_.empty()) {
	old_elem_.push(new_elem_.top());
	new_elem_.pop();
      }
    }
    T ret_val = old_elem_.top();
    old_elem_.pop();
    return ret_val;
  }
};


int main () {
  QueueStack<int> qs{};
  qs.push(3);
  qs.push(2);
  qs.push(1);
  std::cout<<qs.pop()<<std::endl;
  qs.push(15);
  qs.push(14);
  qs.push(13);

  std::cout<<qs.pop()<<std::endl;
  std::cout<<qs.pop()<<std::endl;
  std::cout<<qs.pop()<<std::endl;
  std::cout<<qs.pop()<<std::endl;
  std::cout<<qs.pop()<<std::endl;
}
