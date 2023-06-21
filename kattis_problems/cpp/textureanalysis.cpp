#include <iostream>
#include <cstdio>
#include <string>

int pattern(std::string in){
     int pat = 0;
     int cur_pat = 0;
     int first_seq = 2;
     
     for(int i = 0; in[i] != '\0' ; i++){
         
         if(in[i] == '*'){
            if(first_seq){
              pat = cur_pat;
                cur_pat = 0;
                first_seq--;
                continue;
            }else if(pat != cur_pat ){
                 return 0;
            }
            cur_pat = 0;
         }else{
             cur_pat++;
         }
     }
    return 1;
}

int main() {
     int input_num = 1;
     std::string in;
     for( std::cin>>in; in.compare("END") != 0; std::cin>>in ){
        printf("%d %s\n", input_num, pattern(in)? "EVEN" : "NOT EVEN");
        input_num++;
    }
}