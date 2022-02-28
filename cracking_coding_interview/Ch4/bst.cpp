#include <initializer_list>
#include <iostream>
#include "bst.h"


BST::BST (std::initializer_list<int> ls) {
  for (auto& i : ls) {
    insert(i);
  }
}

void BST::insert (int data) {
  Node* nn = new Node {data, nullptr, nullptr};
  Node *curr = head;

  if (!head) {
    head = nn;
    return;
  }

  curr = head;
  while (curr != nullptr) {
    if ( curr->data < data ) {
      if (!curr->rp) {
	curr->rp = nn;
	return;
      }
      curr = curr->rp;
    } else {
      if (!curr->lp) {
	curr->lp = nn;
	return;
      }
      curr = curr->lp;
    }
  }

  
}

bool BST::validate () {
  return validate_bst(head);
}

bool BST::validate_bst (Node* root) {
  if (root == nullptr) {
    return true;
  }

  if ((!root->lp || root->data >= root->lp->data) &&
      (!root->rp || root->data < root->rp->data)){
    return validate_bst(root->rp) && validate_bst(root->lp);
  }

  return false;
}
