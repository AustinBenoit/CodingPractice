#include <vector>
#include <iostream>
#include <vector>
#include <initializer_list>

class Node {
public:
  char data;
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
};

bool IsPalindrome (const LinkedList& ll) {
  Node* curr = ll.head;
  Node* fast = ll.head;
  std::vector<char> stack {};
  while (fast != nullptr && fast->pNext != nullptr) {
    stack.push_back(curr->data);
    curr = curr->pNext;
    fast = fast->pNext->pNext;
  }

  // found middle node
  if(fast != nullptr) {
    curr = curr->pNext;
  }

  while (curr != nullptr) {
    if (curr->data != stack.back()) {
      return false;
    }
    curr = curr->pNext;
    stack.pop_back();
  }
  
  return true;
}

int main () {
  LinkedList ll1 {'r', 'a', 'c', 'e', 'c', 'a', 'r'};

  std::cout<< (IsPalindrome(ll1)? "True" : "False")<<std::endl;

  LinkedList ll2 {'p', 'i', 'z', 'z', 'a'};
  std::cout<<(IsPalindrome(ll2)? "True" : "False")<<std::endl;

}
