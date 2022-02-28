/**********************************************************************
* Project       : twostones
*                                 
* Program name  :  twostones.cc
*
* Author        : Austin Benoit
*
* Date created  : 18 July 2018
* 
* Dependencies  : None
*
* Purpose       : Determine if a number is even or odd
* 
* Input         : The input contains an integer N (1≤N≤10000000), the number of stones.
*
* Output        : Alice or Bob depending on if the input is even or odd
* 
**********************************************************************/

#include <iostream>
#include <string>

int main()
{
    int input;
    std::cin >> input;
    if (input %2){ 
        std::cout<< "Alice";
    }else{
        std::cout<< "Bob";
    }
}
