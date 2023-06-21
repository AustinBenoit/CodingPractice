#include <iostream>
#include <math.h>
#include <stdio.h>

int main() {
    const double PI = 3.141592653589793238463;
    
    float area, avail_mat, radius, circ;
    //area = pi* r^2
    //cic  2 * pi * r
    scanf("%f %f", &area, &avail_mat);
    
    radius = sqrt( (area / PI) );
    circ = 2 * PI * radius;
    
    if (circ <= avail_mat){
        printf("Diablo is happy!");
    } else {
        printf("Need more materials!");
    }
    
    return 0;   
}
