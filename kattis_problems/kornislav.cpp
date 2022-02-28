#include <iostream>
#include <algorithm>

void print_area (int* array){
    std::sort(array, array + 4);
    std::cout<<array[0] * array[2];
}

int main() {
    int array[4];
    
    for (int i = 0; i < 4; i++){
        std::cin>>array[i];
    }
    print_area(array);
}
