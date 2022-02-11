#include <iostream>
#include <vector>

struct Node {
  int data;
  Node *left, *right;
};

void PrintInOrder (Node *root) {

  if (!root) {
    return;
  }

  PrintInOrder(root->left);

  std::cout<<root->data<<" ";

  PrintInOrder(root->right);
}

Node* MinimumTree (std::vector<int> sorted_list) {

  if (sorted_list.size() == 0) {
  return nullptr;
  } else  if (sorted_list.size() == 1) {
    Node* root = new Node{sorted_list[0], nullptr, nullptr};
    return root;
  } else if (sorted_list.size() == 2) {
    Node* root = new Node{sorted_list[1], nullptr, nullptr};
    root->left = new Node{sorted_list[0], nullptr, nullptr};
  }

  int  middle_num = sorted_list.size() / 2;

  // middle node
  Node* root = new Node{sorted_list[middle_num], nullptr, nullptr};

  root->left = MinimumTree
    (std::vector<int> (sorted_list.begin(), sorted_list.begin() + middle_num));

  root->right = MinimumTree
    (std::vector<int> (sorted_list.begin() + middle_num + 1, sorted_list.end()));

  return root;
}

int main () {
  std::vector<int> v1 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Node* t1 = MinimumTree(v1);
  PrintInOrder(t1);
  std::cout<<std::endl;

  std::vector<int> v2 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
  Node* t2 = MinimumTree(v2);
  PrintInOrder(t2);
  std::cout<<std::endl;

  std::vector<int> v3 {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  Node* t3 = MinimumTree(v3);
  PrintInOrder(t3);
  std::cout<<std::endl;
}
