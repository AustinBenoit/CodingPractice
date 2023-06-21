#include <cstdio>
#include <cmath>

int main() {
    long long int area;
    scanf("%lli",&area);
    double side_length = pow(area,0.5) * 4;
    printf("%.30lf", side_length);
}
