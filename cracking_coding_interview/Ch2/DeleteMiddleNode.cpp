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

void DeleteMiddleNode(Node* ptr){
  Node* next = ptr->pNext;
  ptr->data = next->data;
  ptr->pNext = next->pNext;
  delete next;
}

int main () {
  LinkedList ll {0, 1, 2, 3, 4, 5, 6, 7, 8};
  Node* node_to_del = ll.head;
  for (int i = 0; i < 2; ++i){
    node_to_del = node_to_del->pNext;
  }

  DeleteMiddleNode(node_to_del);
  ll.PrintList();
}
