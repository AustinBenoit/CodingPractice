#include <iostream>

int main() {
    int points[3][2];
    
    for(int i = 0; i < 3; i++){
	    std::cin>>points[i][0]>>points[i][1];
    }

    if( points[0][0] != points[1][0]){
        if(points[0][0] == points[2][0]){
            std::cout<<points[1][0]<<" ";
        }else{
            std::cout<<points[0][0]<<" ";
        }
        
    }else{
        std::cout << points[2][0]<<" ";
    }
    
    if( points[0][1] != points[1][1]){
         if(points[0][1] == points[2][1]){
            std::cout<<points[1][1];
        }else{
            std::cout<<points[0][1];
        }
    }else{
        std::cout << points[2][1];
    }
}