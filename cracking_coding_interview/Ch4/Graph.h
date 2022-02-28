#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

struct Edge {
  int src, dest;
};

class Graph {
public:
  std::vector<std::vector<int>> adj_list;

  Graph(const std::vector<Edge> &edge_list, int num_nodes);

  void PrintBFS (int start);
  void PrintDFS (int start);
};

#endif //GRAPH_H
