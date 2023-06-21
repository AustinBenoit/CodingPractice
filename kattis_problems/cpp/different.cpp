#include <iostream>


int main() {
    long long int a, b, c;
    
    while(std::cin>>a>>b){
     c = (a > b) ? (a - b) : (b - a);
     std::cout<< c <<"\n";
    }
}
