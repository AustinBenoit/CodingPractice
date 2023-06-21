#include <iostream>
#include <algorithm>

#define MOD 42
#define NUM 10

int main() {
    int array[MOD];
    int distinct = 0;
    for(int i = 0; i < MOD; i++){
        array[i] = 0;
    }
    for(int i = 0; i < NUM; i++){
        int num_in;
        std::cin>>num_in;
        
        if( !array[num_in % MOD ] ){
            array[num_in % MOD ] = 1;
            distinct++;
        }
    }
    std::cout<<distinct;
}