#include <iostream>
#include "bst.h"

int main () {
  BST b1 {20, 10, 15, 14, 30, 1, 2, 11, 3, 5, 6};
  std::cout<<b1.validate()<<std::endl;

  Node* curr = b1.head;

  while (curr->lp) {
    curr = curr->lp;
    std::cout<< curr->data<<std::endl;
  }

  Node * nn = new Node{99, nullptr, nullptr};
  curr->lp = nn;
  std::cout<<b1.validate()<<std::endl;
}
