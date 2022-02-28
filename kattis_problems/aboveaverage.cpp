#include <iostream>
#include <cstdio>
#include <math.h>   

int main() {
    int test_cases; 
    std::cin>>test_cases; 
    
    for(int i = 0; i < test_cases; i++){
        int students = 0;
        double abv_avg = 0;
        
        std::cin>>students;
        int grades[students];
        
        double average = 0;
        
        for(int j = 0; j < students; j++){
            std::cin>>grades[j];
            average += grades[j];
        }
         
        average = average / students;
        
        for(int j = 0; j < students; j++){
           if( grades[j] > average)
                abv_avg++;
        }
        
        abv_avg = round(((abv_avg / students) * 100 )*1000) /1000 ;
        
        printf("%.3f""%""\n", abv_avg);
    }
}