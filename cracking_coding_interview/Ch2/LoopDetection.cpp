#include <iostream>
#include <unordered_set>
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

Node* LoopingNode (LinkedList ll) {
  std::unordered_set<Node*> seen_nodes {};

  Node* curr = ll.head;
  while (curr != nullptr) {
    if (seen_nodes.count(curr) != 0) {
      return curr;
    }
    seen_nodes.insert(curr);
    curr = curr->pNext;
  }
  return nullptr;
}

int main() {
  LinkedList ll {1, 2, 3, 4, 5, 6, 7};
  Node* ret = LoopingNode(ll);
  std::cout<<ret<<std::endl;

  LinkedList loop {10, 20, 30, 40};
  ll.tail->pNext = loop.head;
  loop.tail->pNext = loop.head;
  ret = LoopingNode(ll);
  std::cout<<ret->data<<std::endl;
}
