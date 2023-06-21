#include <iostream>

int test_numbers(double a, double  b, double c){
     if( a + b == c){
         return 1;
     } else if ( a - b == c || b - a ==c){
         return 1;
     } else if ( a * b == c){
         return 1;
     } else if ( a / b == c || b / a == c){
         return 1;
     }else{
         return 0;
     }
    return 0;
}



int main() {
    int num_tests;
    std::cin>>num_tests; 
    for(int i = 0; i < num_tests; i++){
        double a, b, c;
        
        std::cin >> a >> b >> c;
        
       
        if(test_numbers(a, b, c) == 1){
            std::cout<<"Possible\n";
        } else{
            std::cout<<"Impossible\n";
        }
        
    }
}
