/**********************************************************************
* Project       : pet
*                                 
* Program name  : pet.cc
*
* Author        : Austin Benoit
*
* Date created  : 18 July 2018
* 
* Dependencies  : None
*
* Purpose       : Determine the winner by calculating the highest score
* 
* Input         : Five lines, each containing 4 integers, the grades a 
*                 contestant got. The contestants are numbered 1 to 5 in 
*                 the order in which their grades were given.
*
* Output        : Output on a single line the winner’s number and their 
*                 points, separated by a space. The input data will 
*                 guarantee that the solution is unique.
*
**********************************************************************/
#include <iostream>

int main(){
    
    int highest = 0;
    int winner = 0;
    int scores[5] ={};

    for(int i = 0; i < 5; i++){
        
        int input;
        
        for(int j =0; j < 4; j++){
            
            std::cin>>input;
            scores[i] += input;
        }
        
        if(highest < scores[i]){
            highest = scores[i];
            winner = i +1;
        }
    }
    
    std::cout<<winner<<" " <<highest;
}