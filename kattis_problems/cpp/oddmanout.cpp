#include <iostream>
#include <algorithm>

int not_dup (int* list, int elements){
     std::sort(list, list + elements);
     for( int i = 0; i < elements; i+=2){
         if(i + 1 < elements){
            if(list[i] != list[i+1]){
                return list[i];
            }
         }else{
             return list[i];
         }
     }
    return -1;
}

int main() {
    int tests; 
    std::cin>>tests;
    for(int i = 0; i < tests; i++){
        int elements;
        std::cin>>elements;
        int array[elements];
        for(int j = 0; j < elements; j++){
            std::cin>>array[j];
            
        }
        std::cout<<"Case #"<<i+1<<": "<<not_dup(array, elements)<<std::endl;
    }
}