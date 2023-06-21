/**********************************************************************
* Project       : sibice
*                                 
* Program name  : sibice.cc
*
* Author        : Austin Benoit
*
* Date created  : 18 July 2018
* 
* Dependencies  : None
*
* Purpose       : Calculates the maximum length of a stick that will fit in a box
* 
* Input         : The first line of input contains an integer N (1≤N≤50), 
*                 the number of matches on the floor, and two integers W and H, 
*                 the dimensions of the box (1≤W≤100, 1≤H≤100).
*                 Each of the following N lines contains a single integer between 
*                 1 and 1000 (inclusive), the length of one match.
*
* Output        : For each match, in the order they were given in the input,
*                 output on a separate line “DA” if the match fits in the 
*                 box or “NE” if it does not.
*
**********************************************************************/

#include <iostream>
#include <cmath>

int main()
{
    int cases,length, width, match_len, max_len;
    
    std::cin>>cases>>width>>length;
    max_len = sqrt(length*length + width*width);
        
    for(int i = 0; i < cases; i++){
        std::cin>>match_len;
        if( max_len >= match_len){
            std::cout << "DA\n";
        }else{
            std::cout<<"NE\n";
        }
    }
}