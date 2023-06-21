#include <iostream>
#include<cstdio>
#include<cmath>

int main() {
    int at_bats;
    std::cin>>at_bats;
    
    int ratio = at_bats;
    
    double x;
    for(int i = 0; i < at_bats; i++){
        int input; 
        std::cin>>input;
         
         if(input >= 0){
         x += input;
         }else {
             ratio--;
         }
    }
    x /= ratio;
    
	printf("%.20f", x);
}
