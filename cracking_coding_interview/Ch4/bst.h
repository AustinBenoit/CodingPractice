#ifndef BST_H
#define BST_H

#include <initializer_list>

struct Node {
  int data;
  Node *lp, *rp;
};

class BST {
private:
  bool validate_bst(Node* root);
public:
  Node* head = nullptr;
  
  BST (std::initializer_list<int> ls);

  void insert (int data);

  bool validate ();

};

#endif
