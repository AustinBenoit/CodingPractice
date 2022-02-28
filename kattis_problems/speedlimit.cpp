#include <iostream>

int total_distance(int seg){
    int total = 0;
    int last = 0;
    for(int i = 0; i < seg; i++){
        int v, t;
        std::cin>>v>>t;
        total += v * (t - last);
        
        last = t;
        
    }
    return total;
}

int main() {
    int seg; 

    for(std::cin>>seg; seg != -1; std::cin>>seg){
        std::cout<<total_distance(seg)<<" miles"<<std::endl;
    }
}