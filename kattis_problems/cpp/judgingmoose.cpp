#include <iostream>

int main() {
    
    int left, right;
    
    std::cin>>left>>right;
    
    if(left == 0 && right == 0){
        std::cout<<"Not a moose";
    }else if( left == right){
        std::cout<<"Even "<< left * 2 ;
    } else{
        std::cout<<"Odd "<< (left > right? left : right) * 2;
    }
}
