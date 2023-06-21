#include <iostream>
#include <cmath>

#define PI 3.14159265


int main() {
    int height, angle, ladder;
        
        std::cin>>height>>angle;
        
        ladder = ceil(height / sin( angle*PI/180));
        
        std::cout<<ladder;
}
