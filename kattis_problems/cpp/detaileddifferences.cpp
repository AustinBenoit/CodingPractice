#include <iostream>
#include <cstring>

std::string diff_str(std::string str1, std::string str2){
    std::string str_diff;
    for (int i = 0; i < str1.length(); i++){
        if(str1[i] == str2[i]){
            str_diff.append(".");
        }else{
            str_diff.append("*");
        }
    }
    return str_diff;
}

int main() {
    int tests;
    std::cin>>tests;
    for(int i = 0; i < tests; i++){
        std::string str1, str2;
        std::cin>>str1>>str2;
        std::string changes = diff_str(str1, str2);
        std::cout<<str1<<std::endl<<str2<<std::endl<<changes<<std::endl<<std::endl;
    }
}
