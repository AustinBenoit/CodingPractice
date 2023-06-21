/**********************************************************************
* Project       : trik
*                                 
* Program name  : trik.cc
*
* Author        : Austin Benoit
*
* Date created  : 18 July 2018
* 
* Dependencies  : None
*
* Purpose       : Determine the final location of a ball after a 
*                 selection of encoded movements
* 
* Input         : A string of the cups movements
*
* Output        : The final position of the ball.
*
**********************************************************************/

#include <iostream>

#define MAX_LEN 51

int main()
{
    int ball_location = 1;
    char movement[MAX_LEN];
    
    std::cin>>movement;
        
    for(int i = 0; movement[i]; i++){
        
        if(ball_location == 1){
            if(movement[i] == 'A')
                ball_location = 2;
            if (movement[i] == 'C')
                ball_location = 3;
        } else if ( ball_location == 2){
            if(movement[i] == 'A')
                ball_location = 1;
            if(movement[i] == 'B')
                ball_location = 3;
        }else{
            if (movement[i] == 'B')
                ball_location = 2;
            if(movement[i] == 'C')
                ball_location = 1;
        }
    }
    
    std::cout<<ball_location;
}