#include <iostream>
#include<cmath>

int main() {
    int numbers;
    std::cin >> numbers;
    
    int sum = 0;
    for(int i = 0; i < numbers; i++){
        int input;
        std::cin>> input;
        int power = input%10;
        int base = input/10;
        sum += pow(base, power);
    }
    std::cout<< sum;
}