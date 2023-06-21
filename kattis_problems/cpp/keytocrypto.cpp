#include <iostream>
#include <string>

std::string decrypt(std::string encrypted_str, std::string key){
    std::string decrypted_str = "";
    for( int i = 0; encrypted_str[i] != '\0'; i++){
        int off_set = key[i] - 'A';
        if( 'A' > encrypted_str[i] - off_set){
            decrypted_str += 'Z' - ('A' - (encrypted_str[i] - off_set + 1));
            
        }else{
            decrypted_str += encrypted_str[i] - off_set;
        }
        
        key += decrypted_str[i];
    }
    return decrypted_str;
}

int main() {
    std::string message, key;
    std::cin>>message>>key;
    std::cout<<decrypt(message, key);
}
