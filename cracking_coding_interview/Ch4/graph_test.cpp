#include "Graph.h"
#include <vector>
#include <iostream>

int main () {
  std::vector<Edge> edge_list
    { Edge{0,1}, Edge{0,2}, Edge{0,7}, Edge{1,2}, Edge{1,3}, Edge{1,4},
      Edge{1,7}, Edge{2,3}, Edge{3,4}, Edge{3,5}, Edge{3,7}, Edge{4,5},
      Edge{4,6}, Edge{4,7}, Edge{5,6}};

  Graph g1(edge_list, 8);
  g1.PrintBFS(0);
  std::cout<<std::endl;
  g1.PrintDFS(0);
}
