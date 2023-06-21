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
* Purpose       : Determine if a number is odd or even
* 
* Input         : Input begins with an integer 1≤n≤20 on a line by itself, 
*                 indicating the number of test cases that follow. 
*                 Each of the following n lines contain a test case consisting 
*                 of a single integer −10≤x≤10.
*
* Output        : For each x, print either ‘x is odd’ or ‘x is even’ 
*                 depending on whether x is odd or even.
*
**********************************************************************/
#include <iostream>

int main(){
    
    int number_cases;
    std::cin>>number_cases;

    for(int i = 0; i < number_cases; i++){
        int input;
        std::cin>>input;
        if(input%2){
            std::cout<<input << " is odd\n";
        }else{
            std::cout<<input << " is even\n";
        }
    }
}