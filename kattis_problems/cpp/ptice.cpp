#include <iostream>
#include <string>
#include <cmath>

int num_correct(std::string ans, std::string seq){
    int num_correct =  0;
    for(int i = 0; i < ans.length(); i++){
        if( ans[i] == seq[i%seq.length()])
            num_correct++;
    }
    
    return num_correct;
}


int main() {
    int max_q;
    std::cin>>max_q;
    std::string ans;
    std::cin>>ans;
    
    std::string adrian = "ABC";
    std::string bruno = "BABC";
    std::string goran = "CCAABB";
    
    int a = num_correct(ans, adrian);
    int b = num_correct(ans, bruno);
    int c =  num_correct(ans, goran);
    
    std::cout<<std::max(a,std::max(b,c))<<std::endl;
    if( a == std::max(a,std::max(b,c))){
        std::cout<<"Adrian\n";
    }
    if( b == std::max(a,std::max(b,c))){
        std::cout<<"Bruno\n";
    }
    if( c == std::max(a,std::max(b,c))){
        std::cout<<"Goran\n";
    }

}