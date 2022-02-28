#include <iostream>



int main() {
    int x,y,n;
    std::cin>>x >> y >> n;
    for(int i = 1; i <= n; i++){
        if((i % x) && (i % y) ){
            std::cout<<i<<"\n";
        } else{
            if(!(i % x) && !(i % y)){
                std::cout <<"FizzBuzz\n";
            } else if(!(i % x)){
                std::cout<<"Fizz\n";
            }else{
                std::cout<<"Buzz\n";
            }
            
        }
    }
}
