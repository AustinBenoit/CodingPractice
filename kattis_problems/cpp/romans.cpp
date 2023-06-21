#include <iostream>
#include <cstdio>
#include <cmath>

int main() {
    double miles, out;
    std::cin>>miles; 
    double english = 5280, roman = 4854;
    out = round ((miles * 1000) * english / roman);
    
    //printf used as cout would print in scientific format 
    // that was a funny bug/feature
    printf("%.0f", out);
}
