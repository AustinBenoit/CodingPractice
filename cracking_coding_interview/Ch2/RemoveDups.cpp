#include <iostream>
#include <set>
#include <vector>

class Node{
public:
  int data;
  Node* pNext;
  
  Node(int x) : data(x), pNext(nullptr){}
};

void RemoveDups(Node* head){
  std::set<int> seen;
  Node* last_ptr = head;
  for (Node* ptr = head; ptr != nullptr; ptr = ptr->pNext){
    if(seen.count(ptr->data) == 0){
      seen.insert(ptr->data);
      last_ptr = ptr;
    } else {
      last_ptr->pNext = ptr->pNext;
      delete ptr;
      ptr = last_ptr;
    }
  }
}

void PrintList(Node* head){
  for (Node* ptr = head; ptr != nullptr; ptr = ptr->pNext){
    std::cout<<ptr->data<<" ";
  }
  std::cout<<std::endl;
}

int main () {
  Node* head = new Node(1);

  std::vector<int> data { 1, 2, 3, 41234, 3, 6, 7, 4, 7, 10};

  Node* ptr = head;
  for (auto val: data){
    ptr->pNext = new Node(val);
    ptr = ptr->pNext;
  }

  PrintList(head);

  RemoveDups(head);

  PrintList(head);

}
