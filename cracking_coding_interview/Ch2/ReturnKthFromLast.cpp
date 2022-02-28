#include <iostream>
#include <vector>
#include <initializer_list>

class Node {
public:
  int data;
  Node* pNext;
  explicit Node(int x) : data(x), pNext(nullptr){}
};

class LinkedList {
public:
  Node* head = nullptr;
  void PrintList(){
    for(Node* i = head; i != nullptr; i = i->pNext){
      std::cout<<i->data<<" ";
    }
    std::cout<<std::endl;
  }

  Node* GetKthFromLast(int k){
    Node* kth_from_last_element = head;
    Node* last_visited = head;
    // go forward K elements
    // save that value
    for (int i = 0 ; i < k; ++i) {
      if (last_visited == nullptr)
        return nullptr;
      last_visited = last_visited->pNext;
    }

    // keep moving forward until nullptr

    for(; last_visited->pNext != nullptr; last_visited = last_visited->pNext){
      kth_from_last_element = kth_from_last_element->pNext;
    }

    return kth_from_last_element;
  }

  explicit LinkedList(std::initializer_list<int> input){
    Node* last_node;
    std::initializer_list<int>::iterator it = input.begin();
    head = new Node(*it);
    last_node = head;
    ++it;
    for (; it != input.end(); ++it){
      last_node->pNext = new Node(*it);
      last_node = last_node->pNext;
    }
  }
};

int main () {
  LinkedList test1 {1, 2, 3, 4, 5};
  test1.PrintList();
  Node* kth = test1.GetKthFromLast(4);
  std::cout<<kth->data<<std::endl;
  kth = test1.GetKthFromLast(0);
  std::cout<<kth->data<<std::endl;
  kth = test1.GetKthFromLast(2);
  std::cout<<kth->data<<std::endl;
  kth = test1.GetKthFromLast(10);
  std::cout<<((kth == nullptr)? -9999 : kth->data) <<std::endl;
}
