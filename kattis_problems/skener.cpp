#include <iostream>

void output_str(char* old, char* output, int len, int scale){
    int curr_index = 0;
    for(int i = 0; i < len; i++)
        for( int j = 0; j < scale; j++){
            output[curr_index] = old[i];
            curr_index++;
        }
    
    output[curr_index ] =  '\0';
    
}

void scale(int r, int c, int zr, int zc ){
    for(int i = 0; i < r; i++){
        
        char col[c + 1];
        char col_o[c*zc + 1];
        std::cin>>col;
        
        output_str(col, col_o, c, zc);
        
        for(int j = 0; j < zr; j++ ){
            std::cout<<col_o<<std::endl;
        }
        
    }
}

int main() {
    int r, c, zr , zc;
    std::cin>>r>>c>>zr>>zc;
    
    scale(r, c, zr, zc);

}