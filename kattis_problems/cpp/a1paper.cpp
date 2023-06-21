#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int smallest_size;
    std::cin>>smallest_size;
    //correct for the array starting a size a2
    long int paper[smallest_size - 1];
    for( int i = 0; i < smallest_size -1 ; i++){
        cin>>paper[i];
    }
    
    //need two sheets of a2
    long int next_size_needed = 2;
    double tape = 0 ; 
    
    double length = 0.5946035575;
    double width =  0.42044820762;
    
    for(int i = 0; i < smallest_size - 1; i++){
        
        //tape will be needed for the pages
        tape += length * (next_size_needed/2); 
        
        //check to see if have enough pages
        if(next_size_needed <= paper[i]){
            next_size_needed = 0;
            break;
        }
            
        // need to tape more pages togther
        next_size_needed = 2 * (next_size_needed - paper[i]); 
        
        // get new page size
        double tmp = width;
        width = length  / 2;
        length = tmp;
    }
    
    //final result
    if (next_size_needed > 0){
        printf("impossible\n");
    }else{
        printf("%.11f\n", tape);
    }
}
