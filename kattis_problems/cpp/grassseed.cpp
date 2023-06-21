#include <iostream>
#include <cstdio>

class Cost{
    private:
      double cost;
      double total_cost = 0;
      
    public:
    Cost(double c): cost(c) {};
    
    void add_lawn(double length, double width){
        double area = length * width;
        total_cost += area * cost;    
    }
    
    double get_cost(){return total_cost;}
    
    
}; 

int main() {
    double cost; 
    int number_lawns;
    
    std::cin>>cost;
    std::cin>>number_lawns;
    
    Cost test(cost);
    
    for(int i = 0; i < number_lawns; i++){
        double length, width;
        std::cin>>length>>width;
        
        test.add_lawn(length, width);
        
    }
    printf("%.10f",test.get_cost());
}