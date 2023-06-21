#include <iostream>
#include <cmath>

bool vaild_stars(int p1, int p2, int stars){
    while(stars > 0) {
        stars -= p1;
        if(stars == 0 ) return true; 
        stars -= p2;
        if(stars == 0 ) return true; 
    }
    return false;
}

void star_combinations(int stars){
    std::cout<<stars<<":\n";
    for(int i = 2; i <= stars/2 + 1; i++ ){
        for(int j = i - 1; j <= i; j++ ){
            if(vaild_stars(i, j, stars)){
                std::cout<<i<<","<<j<<"\n";
            }
        }
    }
}

int main() {
    int stars;
    std::cin>>stars;
    star_combinations(stars);

}
