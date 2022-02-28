#include <iostream>
#include <cstring>

void print_names(std::string names[], int num_names, int set){
    std::cout<<"SET "<<set<<std::endl;
    for(int i = 0; i < num_names; i++ ){
        std::cout<<names[i]<<std::endl;
    }
}

int main() {
    for(int i = 1;;i++){
        int num_names;
        std::cin>>num_names;
        
        if(!num_names) break;
        
        std::string sym_order[num_names];
        int front = 0;
        int back = num_names -1;
        for(int j = 0; j < num_names; j++ ){
            std::string name;
            std::cin>>name;
            if (j % 2){
                sym_order[back--] = name;
            }else{
                sym_order[front++] = name;
            }
        }
        print_names(sym_order, num_names, i);
    }

}