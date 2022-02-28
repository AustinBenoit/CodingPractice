#include <iostream>


struct Node {
  int data;
  Node* pNext;
  Node (int x) : data(x), pNext(nullptr) {}
};

class LinkedList {
public:
  Node* head, *tail;
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
};


Node* FirstCommonNode(LinkedList ll1, LinkedList ll2){
  if (ll1.tail != ll2.tail) {
    return nullptr;
  }

  int len_1 = 0, len_2 = 0;

  for(Node* curr = ll1.head; curr != nullptr; curr = curr->pNext){
    len_1++;
  }

  for(Node* curr = ll2.head; curr != nullptr; curr = curr->pNext){
    len_2++;
  }

  Node *curr1 = ll1.head, *curr2 = ll2.head;
  int len_diff = len_1 - len_2;
  if ( len_diff > 0) {
    for (int i = 0; i < len_diff; ++i)
      curr1 = curr1->pNext;
  } else if (len_diff < 0) {
    len_diff *= -1;
    for (int i = 0; i < len_diff; ++i)
      curr2 = curr2->pNext;
  }

  while (curr1 != nullptr || curr2 != nullptr) {
    if (curr1 == curr2) {
      return curr1;
    }
    curr1 = curr1->pNext;
    curr2 = curr2->pNext;
  }
  return nullptr;
}

int main () {
  LinkedList l1 {1, 2, 3, 4, 5};
  Node* rn = FirstCommonNode(l1, l1);
  std::cout<<rn->data<<std::endl;

  LinkedList l2 {10,30,40};
  rn = FirstCommonNode(l1, l2);
  std::cout<<rn<<std::endl;

  LinkedList common {101, 102, 103, 108};
  l2.tail->pNext = common.head;
  l2.tail = common.tail;

  l1.tail->pNext = common.head;
  l1.tail = common.tail;
  l2.PrintList();
  l1.PrintList();
  rn = FirstCommonNode(l1, l2);
  std::cout<<rn->data<<std::endl;

}
