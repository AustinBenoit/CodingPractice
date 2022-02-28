/**********************************************************************
* Project       : Planina
*                                 
* Program name  : Planina.cc
*
* Author        : Austin Benoit
*
* Date created  : 13 jun 2018
* 
* Dependencies  : None
*
* Purpose       : some of the points belong to more than one square. 
*                 In order to decrease memory consumption, he calculates 
*                 and stores such points only once. He now wonders how many 
*                 points in total will he need to store in memory after N iterations.
* 
* Input         : The first and only line of input contains one integer N (1≤N≤15), the number of iterations.
*
* Output        : The first and only line of output should contain one number, the number of points stored after N iterations.
*
**********************************************************************/

#include <iostream>

int main()
{
  int itteration = 1;
  int total = 2;
  
  std::cin >> itteration;
  
  for (int i = 0; i < itteration; i++){
   total = total * 2 - 1;   
  }
  
  std::cout << total*total;
}