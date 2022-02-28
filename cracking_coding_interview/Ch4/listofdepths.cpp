#include <iostream>
#include <vector>

struct Node {
  int data;
  Node *left, *right;
};

Node* GenerateTree (int levels) {
  if (levels == 0) {
    return nullptr;
  }
  return  new Node{levels , GenerateTree(levels-1), GenerateTree(levels-1)};
}

void TreeTraversal (Node *root, std::vector<std::vector<int>> &vl, int level) {
  if (!root) {
    return;
  }
  
  if (vl.size() <= level) {
    // Handles the case the level == 0
    vl.resize((level + 1) * 2);
  }
  
  vl[level].push_back(root->data);

  TreeTraversal(root->left, vl, level + 1);
  TreeTraversal(root->right, vl, level + 1);
}

std::vector<std::vector<int>> LevelList (Node *root) {
  std::vector<std::vector<int>> vl {};

  TreeTraversal(root, vl,0);
  return vl;
}

int main () {
  Node* root = GenerateTree(10);

  std::vector<std::vector<int>> vl = LevelList(root);

  for (auto &i : vl) {
    for (auto &j : i) {
      std::cout<<j<< " ";
    }
    std::cout<<std::endl;
  }
}
