#include <iostream>

int main() {
	int num_inputs;
	int sub_zero = 0;
	std::cin>>num_inputs;
	
	for(int i = 0; i < num_inputs; i++){
	    int temp;
	    std::cin>> temp;
	    if(temp < 0)
	        sub_zero++;
	        
	}
    std::cout<<sub_zero;
    
}
