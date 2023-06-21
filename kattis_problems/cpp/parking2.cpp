#include <iostream>

int distance(){
    int stores, min, max;
    std::cin>>stores;
    std::cin>>min;
    max = min;
    for(int i = 1; i < stores; i++){
        int dis;
        std::cin>>dis;
        if (max < dis){
            max = dis;
        }
        
        if(min > dis){
            min = dis;
        }
    }
    return (max - min) * 2;
}

int main() {
    int num_test;
    std::cin>>num_test;
    for(int i = 0; i < num_test; i++){
        std::cout<<distance()<<std::endl;
    }
}