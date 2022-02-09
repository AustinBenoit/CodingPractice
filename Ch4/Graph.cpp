#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <iostream>

#include "Graph.h"

Graph::Graph (const std::vector<Edge> &edge_list, int num_nodes) : adj_list{} {
  adj_list.resize(num_nodes);
  for (auto& edge : edge_list) {
    adj_list[edge.src].push_back(edge.dest);
    adj_list[edge.dest].push_back(edge.src);
    }
}

void Graph::PrintBFS (int start) {
  std::set<int> seen {};
  std::queue<int> toSee {};
  toSee.push(start);
  seen.insert(start);

  while (!toSee.empty()) {
    int node = toSee.front();
    toSee.pop();
    std::cout<<node<<std::endl;

    for (auto& edge : adj_list[node]) {
      if (seen.count(edge) == 0) {
	seen.insert(edge);
	toSee.push(edge);
      }
    }
  }
}


void Graph::PrintDFS (int start) {
  std::set<int> seen {};
  std::stack<int> toSee {};
  toSee.push(start);
  seen.insert(start);

  while (!toSee.empty()) {
    int node = toSee.top();
    toSee.pop();
    std::cout<<node<<std::endl;

    for (auto& edge : adj_list[node]) {
      if (seen.count(edge) == 0) {
	seen.insert(edge);
	toSee.push(edge);
      }
    }
  }
}
