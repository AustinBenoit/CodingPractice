#include <iostream>
#include<cmath>

int main() {
    int to_print;
    std::cin>>to_print;
	int x=ceil(log2(to_print)) + 1;
	std::cout<< x;
}
