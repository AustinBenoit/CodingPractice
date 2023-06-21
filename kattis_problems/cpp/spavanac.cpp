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
* Purpose       : Find the time of a 24 hour clock less 45 min
* 
* Input         : The first and only line of input will contain 
*                 exactly two integers H and M (0≤H≤23,0≤M≤59) separated by a single space, 
*                 the input time in 24-hour notation. H denotes hours and M minutes.
*
* Output        : The first and only line of output should contain exactly 
*                 two integers, the time 45 minutes before input time.
*
**********************************************************************/
#include <iostream>
#include <string>

int main()
{
    int hour, min;
    std::cin>>hour>>min;
    
    min = min - 45;
    if(min < 0){
        hour = hour -1;
        min = min + 60;
    }
    
    if(hour < 0){
        hour = hour + 24;
    }
    
    std::cout<<hour<<" " <<min;
}