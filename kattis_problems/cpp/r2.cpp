/**********************************************************************
* Project       : R2
*                                 
* Program name  : R2.cc
*
* Author        : Austin Benoit
*
* Date created  : 13 Jun 2018
* 
* Dependencies  : None
*
* Purpose       : Find a number for a given mean
* 
* Input         : The first and only line of input contains two integers R1 and S, both between −1000 and 1000.
*
* Output        : Output R2 on a single line.
*
**********************************************************************/

#include <iostream>

int main(){
    int s, r1, r2;
    std::cin >> r1 >> s;
    r2 = 2 * s - r1;
    std::cout << r2;
 
 return 0;
}
