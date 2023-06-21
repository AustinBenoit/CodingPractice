#include <iostream>
#include <string>

char rotate_upper( char in, int r){
    char out;
    out = in + r % 26;
    if( out < 'A'){
        
    }
    if (out > 'Z'){
        out = in + r%26 - 26;
    }
    return out;
}


std::string decode(std::string encoded){
    std::string left, right, out;
    int left_rotate = 0, right_rotate = 0;
    int half_len = encoded.length() / 2;
    
    // get amount to be rotated
    for(int i = 0; i < half_len; i++){
        left_rotate += encoded[i] - 'A';
        right_rotate += encoded[i + half_len] - 'A';
    }
    
    //rotate strings
    for(int i = 0; i < half_len; i++){
        left += rotate_upper(encoded[i], left_rotate);
        right += rotate_upper(encoded[ i + half_len], right_rotate);
    }
    
    //merge
    for( int i = 0; i < half_len; i++){
        out += rotate_upper(right[i], left[i] - 'A');
    }
    return out;
}

int main() {
    std::string input;
    std::cin>>input;
    std::cout<<decode(input);
}
