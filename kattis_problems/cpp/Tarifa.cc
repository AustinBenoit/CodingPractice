/**********************************************************************
* Project       : Tarifa
*                                 
* Program name  : Tarifa.cc
*
* Author        : Austin Benoit
*
* Date created  : 25 May 2018
* 
* Dependencies  : None
*
* Purpose       : Calculate the monthly roll over of a data plan
*                 
* Input         : The first line of input contains the integer X (1≤X≤100). The second line 
*                 of input contains the integer N (1≤N≤100). Each of the following N lines contains
*                 an integer Pi (0≤Pi≤10000), the number of megabytes spent in each of the first N 
*                 months of using the plan. Numbers Pi will be such that Pero will never use more
*                 megabytes than he actually has.
*
* Output        : The first and only line of output must contain the required value from the task.
*
*
**********************************************************************/

#include <iostream>

int main(){

  int mb_per_month = 0;
  int months = 0;
  std::cin >> mb_per_month;
  std::cin >> months;

  int total = mb_per_month * (months + 1);

  int months_usage = 0;
  
  for(int i = 0; i < months; i++){
    std::cin >> months_usage;
    total -= months_usage; 
  }
 
  std::cout << total;
  
  return 0;
}
