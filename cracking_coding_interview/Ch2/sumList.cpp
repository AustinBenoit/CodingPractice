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
  Node* tail = nullptr;

  void PrintList(){
    for(Node* i = head; i != nullptr; i = i->pNext){
      std::cout<<i->data<<" ";
    }
    std::cout<<std::endl;
  }

  void AddNode (int x) {
    if (head == nullptr) {
      head = new Node(x);
      tail = head;
    } else {
      tail->pNext = new Node(x);
      tail = tail->pNext;
    }
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
    tail = last_node;
  }

  LinkedList () {}
};

LinkedList AddLists (const LinkedList& a, const LinkedList& b) {
  LinkedList return_sum;
  bool carry_over = false;

  Node* a_curr = a.head;
  Node* b_curr = b.head;

  while (a_curr != nullptr || b_curr != nullptr) {
    int sum = 0;
    if (carry_over) {
      sum = 1;
      carry_over = false;
    }
    
    if (a_curr != nullptr) {
      sum += a_curr->data;
      a_curr = a_curr->pNext;
    }

    if (b_curr != nullptr) {
      sum += b_curr->data;
      b_curr = b_curr->pNext;
    }

    return_sum.AddNode( sum % 10);
    if (sum >= 10 ) {
      carry_over = true;
    }
  }

  if (carry_over) {
    return_sum.AddNode(1);
  }
  return return_sum;
}

int main () {
  LinkedList la {1};
  LinkedList lb {9, 9, 9, 9, 9};
  LinkedList lsum = AddLists(la, lb);
  lsum.PrintList();
}
