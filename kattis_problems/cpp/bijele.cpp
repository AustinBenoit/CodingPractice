#include <iostream>
#include <cstdio>

int main() {
    const int NUM_PIECES = 6;
    int pieces[] = {1,1,2,2,2,8};
    
    int given_pieces[NUM_PIECES];
    int out[NUM_PIECES];
    
     for (int i = 0; i < NUM_PIECES; i++){
        scanf ("%i", given_pieces + i);
     }
     
      for (int i = 0; i < NUM_PIECES; i++){
        out[i] = pieces[i] - given_pieces[i];
     }
     
      for (int i = 0; i < NUM_PIECES; i++){
        printf ("%i", out[i]);
        
        if(i < NUM_PIECES -1)
            printf(" ");
     }
}
