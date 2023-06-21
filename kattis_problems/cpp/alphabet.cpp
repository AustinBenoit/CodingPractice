#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    
    std::cin >> str;
    
    int str_len = str.length();
    int alp_len = alphabet.length();
    
    int array[alp_len+1][str_len+1];
    
    for(int i = 0; i < str_len + 1; i++){
        array[0][i] = 0;
    }
    
    for(int i = 0; i < alp_len + 1; i++){
        array[i][0] = 0;
    }
    
    for(int i = 1; i < alp_len + 1 ; i++){
        for(int j = 1; j < str_len + 1; j++){
            
            if(alphabet[i-1] == str[j-1]){
                array[i][j] = array[i-1][j-1] + 1;
            }else{
                array[i][j] = std::max(array[i][j-1], array[i-1][j]);
            }
        }
    }


    std::cout<<alp_len - array[alp_len ][str_len];
}