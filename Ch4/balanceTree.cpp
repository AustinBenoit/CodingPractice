#include <iostream>
#include <cmath>
#include <algorithm>

struct Node {
  int data;
  Node *left, *right;
};

int DepthBalanced (Node *root) {
  if (!root) {
    return 0;
  }
  
  int dr = DepthBalanced(root->right);
  int dl = DepthBalanced(root->left);

  if (dr == -1 || dl == -1) {
    return dr;
  }

  if ( std::abs(dr - dl) > 1) {
       return -1;
  } else {
    return std::max(dr, dl) + 1;
  }
}

bool IsBalanced (Node *graph) {
  if (!graph) {
    return true;
  }

  if (DepthBalanced(graph) == -1) {
    return false;
  } else {
    return true;
  }
}

int main() {
  Node root {1, nullptr, nullptr};
  Node a {2, nullptr, nullptr};
  root.left = &(a);
  Node b {3, nullptr, nullptr};
  root.left->left = &(b);
  Node c {3, nullptr, nullptr};
  root.left->right = &(c);;
  Node e {4, nullptr, nullptr};
  root.right = &e;

  std::cout<<IsBalanced(&root)<<std::endl;

}
