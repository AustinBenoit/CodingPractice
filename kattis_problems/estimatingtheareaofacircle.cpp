#include <iostream>
#include <cmath>
#include <cstdio>

int main() {
	double r, m, c;
	std::cin>>r>>m>>c;
	for(;r||m||c; std::cin>>r>>m>>c){
	    double actual_area = (r*r) * 4 * atan(1.0);
	    double point_area = (c / m)* ( (2 * r) * (2 * r) );
	    printf("%.10f %.10f\n", actual_area, point_area);
	}

}
