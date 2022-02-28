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

  void Partition (int num) {
    Node* partition_head = nullptr;
    Node* partition_tail = nullptr;

    Node* start_head = nullptr;
    Node* start_tail = nullptr;

    Node* curr = head;

    while (curr != nullptr) {
      if (curr->data > num){
	if(partition_head == nullptr){
	  partition_head = curr;
	  partition_tail = curr;
	} else {
	  partition_tail->pNext = curr;
	  partition_tail = curr;
	}
      } else {
	if(start_head == nullptr){
	  start_head = curr;
	  start_tail = curr;
	} else {
	  start_tail->pNext = curr;
	  start_tail = curr;
	}
      }
      curr = curr->pNext;
    }

    partition_tail->pNext = nullptr;
    if(start_head == nullptr){
      head = partition_head;
    } else {
      head = start_head;
      start_tail->pNext = partition_head;
    }
  }
};


int main () {
  LinkedList ll {10, 0, 1, 7, 3, 5, 4, 5, 6, 7, 8};
  ll.PrintList();
  ll.Partition(5);
  ll.PrintList();

  LinkedList ll2 {0, 1, 7, 3, 5, 4, 5, 6, 7, 8, 3, 4, 1};
  ll2.PrintList();
  ll2.Partition(4);
  ll2.PrintList();

  LinkedList ll3 {2, 3, 4, 5, 3, 4, 5};
  ll3.PrintList();
  ll3.Partition(1);
  ll3.PrintList();
}
