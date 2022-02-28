#include <iostream>
#include <queue>
#include <set>

#include "Graph.h"

bool IsPath (Graph g, int node_start, int node_end) {
  if (node_start == node_end) {
    return true;
  }
  
  // Use bfs to find the two nodes.
  std::queue<int> bfs_queue {};
  bfs_queue.push(node_start);
  std::set<int> seen {};
  seen.insert(node_start);

  while (!bfs_queue.empty()) {
    int node = bfs_queue.front();
    bfs_queue.pop();

    for (auto& edge : g.adj_list[node]) {
      if (seen.count(edge) == 0 ) {
        if (edge == node_end) {
          return true;
        }
        seen.insert(edge);
        bfs_queue.push(edge);
      }
    }
  }
  return false;
}

int main () {
  std::vector<Edge> edge_list1
    { Edge{0,1}, Edge{0,2}, Edge{0,7}, Edge{1,2}, Edge{1,3}, Edge{1,4},
      Edge{1,7}, Edge{2,3}, Edge{3,4}, Edge{3,5}, Edge{3,7}, Edge{4,5},
      Edge{4,6}, Edge{4,7}, Edge{5,6}};
  Graph g1 (edge_list1, 8);
  std::cout<< IsPath(g1, 0, 6)<<std::endl;

  std::vector<Edge> edge_list2
    { Edge{0,1}, Edge{0,2}, Edge{0,7}, Edge{1,2}, Edge{1,3}, Edge{1,4},
      Edge{1,7}, Edge{2,3}, Edge{3,4}, Edge{3,5}, Edge{3,7}, Edge{4,5},
      Edge{4,6}, Edge{4,7}, Edge{5,6}, Edge{8,9}, Edge{9,8}, Edge{9, 10}};
  Graph g2 (edge_list2, 11);
  std::cout<< IsPath(g2, 0, 10)<<std::endl;
}
