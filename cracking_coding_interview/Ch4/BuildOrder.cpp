#include <iostream>
#include <vector>
#include <map>

struct Edge {
  int src, dest;
};

class OrderGraph {
public:
  std::map<int, int> dependents;
  std::vector<std::vector<int> > adj_list;
  int num_nodes;

  OrderGraph(const std::vector<Edge> &edge_list, int nodes) : num_nodes{nodes} {
    adj_list.resize(nodes);
    for (auto& edge : edge_list) {
      adj_list[edge.src].push_back(edge.dest);
      dependents[edge.dest]++;
    }

    // Silly but just gets all of the nodes in the dependents map
    for (int i = 0 ; i < num_nodes; ++i){
      dependents[i];
    }
  }
};



std::vector<int> GetOrder (OrderGraph g) {
  std::vector<int> order {};
  int curr_order = 0;

  std::cout<<"here";
  for (auto i : g.dependents){
    if (i.second == 0) {
      order.push_back(i.first);
    
      g.dependents[i.first] = -1;
      }
  }
  
  while (curr_order < order.size()){

    if (curr_order > order.size()){
      return std::vector<int> {};
    }

    for (const auto& i : g.adj_list[order[curr_order]]){
      g.dependents[i]--;
    }

    for (const auto& i : g.dependents){
      if (i.second == 0) {
	order.push_back(i.first);
	g.dependents[i.first] = -1;
      }
    }
    curr_order++;
  }
  
  return order;
}


int main () {;
  OrderGraph g ({Edge{0,3},Edge{5,1}, Edge{1,3}, Edge{5,0}, Edge{3,2}}, 6);
  std::vector<int> order = GetOrder(g);

  for (const auto& i : order) {
    std::cout<<i<<" ";
  }

  std::cout<<std::endl;

}
