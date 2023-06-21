/**********************************************************************
* Project       : Zamaka
*                                 
* Program name  : Zamaka.cc
*
* Author        : Austin Benoit
*
* Date created  : 25 May 2018
* 
* Dependencies  : None
*
* Purpose       : given three integers L, D and X. Determine the minimal integer N such that L≤N≤D 
*                 and the sum of its digits is X. determine the maximal integer M such that L≤M≤D 
*                 and the sum of its digits is X
*                 
* Input         :  given three integers L, D and X
*                 
* Output        : The first line of output must contain the integer N from the task. The second line
*                 of output must contain the integer M from the task.
* 
**********************************************************************/

#include<iostream>

int main(){

  int lower, upper, sum;
  int min = 0;
  int max = 0; 

  std::cin >> lower;
  std::cin >> upper;
  std::cin >> sum;

  min = lower;
  int curr_sum = 0;

  for(int i = 0; i<5; i++){
    curr_sum += lower%10;
    lower /= 10;
  }

  while(curr_sum != sum){
    min++;
    lower = min;
    curr_sum = 0;
    for(int i = 0; i<5; i++){
      curr_sum += lower%10;
      lower /= 10;
    }
  }

  curr_sum = 0;
  max = upper;
  
  for(int i = 0; i<5; i++){
    curr_sum += upper%10;
    upper /= 10;
  }

  while(curr_sum != sum){
    max--;
    upper = max;
    curr_sum = 0;
    for(int i = 0; i<5; i++){
      curr_sum += upper%10;
      upper /= 10;
    }
  }
  
  std::cout << min <<"\n";
  std::cout << max <<"\n";

  return 0;
}
