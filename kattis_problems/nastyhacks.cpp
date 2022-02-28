#include <iostream>
#include <algorithm>

void print_result (int* array){
    if( array[0] == array[1] - array[2]){
        std::cout<<"does not matter\n";
    }else if(array[0] < array[1] - array[2]){
        std::cout << "advertise\n";
    }else {
        std::cout << "do not advertise\n";
    }
}

int main() {
    int number_tests = 0;
    std::cin>>number_tests;
    for(int i = 0; i < number_tests; i++){
        int array[3];
        for (int i = 0; i < 3; i++){
            std::cin>>array[i];
    }
    print_result(array);    
        
    }
}