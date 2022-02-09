#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

struct Edge {
  int src, dest;
};

class Graph {
private:
  std::vector<std::vector<int>> adj_list;
  
public:
  Graph(const std::vector<Edge> &edge_list, int num_nodes);

  void PrintBFS (int start);
  void PrintDFS (int start);
};

#endif //GRAPH_H
