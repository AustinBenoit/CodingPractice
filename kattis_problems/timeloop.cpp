/**********************************************************************
* Project       : twostones
*                                 
* Program name  : twostones.cc
*
* Author        : Austin Benoit
*
* Date created  : 7 July 2018
* 
* Dependencies  : None
*
* Purpose       : Output the entire wizard’s spell by counting from 
*                 1 to N, giving one number and “Abracadabra” per line.
* 
* Input         : Input consists of a single integer N (1≤N≤100).
*
* Output        : The wizard says he can break you out of the time loop, 
*                 but you must chant his spell. The wizard gives you a 
*                 magic number, and you must count up to that number, 
*                 starting at 1, saying “Abracadabra” each time.
*
**********************************************************************/
#include <iostream>

int main() {
    int count;
    std::cin >> count;
    for(int i = 1; i <= count; i++){
        std::cout<< i  << "  Abracadabra\n";
    }
}