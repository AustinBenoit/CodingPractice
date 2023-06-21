/**********************************************************************
* Project       : Filip
*                                 
* Program name  : Filip.cc
*
* Author        : Austin Benoit
*
* Date created  : 19 July 2018
* 
* Dependencies  : None
*
* Purpose       : Flip the sig digs and compair the two numbers
* 
* Input         : Two integers
*
* Output        : The larger of the two integers with it's vaules fliped
*
**********************************************************************/

#include <iostream>

int main()
{
    int num1, num2;
    int flip_num1 = 0;
    int flip_num2 = 0;
    
    std::cin>>num1>>num2;
    
    for (int i = 1; i < 1000; i = i*10){
        flip_num1+= ((num1/i)%10)*(100/i);
        flip_num2+= ((num2/i)%10)*(100/i);
    }
    
    if( flip_num1 > flip_num2){
        std::cout<<flip_num1;
    }else{
        std::cout<<flip_num2;
    }   
}
