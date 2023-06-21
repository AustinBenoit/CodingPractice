/**********************************************************************
* Project       : Quadrant Selection
*                                 
* Program name  : Quadrant_Selection.cc
*
* Author        : Austin Benoit
*
* Date created  : 13 Jun 2018
* 
* Dependencies  : None
*
* Purpose       : Find the quadrant in which a point lies 
* 
* Input         : A 2D Point
*
* Output        : Which quadrant a point lies
*
**********************************************************************/

#include <iostream>

int main(){
  int x, y;
  
  std::cin >> x >> y;
  
  if( 0 < x){
      if ( 0 < y){
          std::cout << "1";
      }else{
          std::cout << "4";
      }
  }else if(0 < y){
    std::cout << "2";
  }else{
    std::cout << "3";
  }
}
