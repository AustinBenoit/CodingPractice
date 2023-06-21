/**********************************************************************
* Project       : 10 Kinds of People
*                                 
* Program name  : 10_kinds_main.cc
*
* Author        : Austin Benoit
*
* Date created  : 23 June 2018
* 
* Dependencies  : Graph.h
*
* Purpose       : You have to figure out if it is possible for either 
*                 type of person to get between various locations of interest. 
*                 People can move north, south, east or west, but cannot move diagonally.
*
* Input         : Input starts with a line containing two positive integers, 1≤r≤1000 
*                 and 1≤c≤1000. The next r input lines give the contents of the map, 
*                 each line containing exactly c characters (which are all chosen from 0 or 1).
*                 The next line has an integer 0≤n≤1000. The following n 
*                 lines each contain one query, given as four integers: r1,c1 
*                 and r2,c2. These two pairs indicate two locations on the map, 
*                 and their limits are 1≤r1,r2≤r and 1≤c1,c2≤c.
*
* Output        : For each query, output binary if a binary user can 
*                 start from location r1,c1 and move to location r2,c2. 
*                 Output decimal if a decimal user can move between 
*                 the two locations. Otherwise, output neither.
*
**********************************************************************/
#include <iostream>
#include <cstdio>
#include <vector>

class QFind{
     std::vector<int> id;
     int size;
    
    public: 
     QFind(int size){
         this->size = size;
         for(int i = 0; i < size; i++){
             id.push_back (i);
         }
     }
    
    int find(int p, int q){
        if (root(p) == root(q))
            return 1;
        return 0;
    }
  
   int root(int i)
    {
        while (i != id[i]){
           id[i] = id[id[i]];
           i = id[i]; 
        } 
        return i;
    }
    
    void connect(int p, int q){
        int a = root(p);
        int b = root(q);
        id[a] = b;
    }
};

void input(int array[],  int r, int c){
  /* takes in the string of 1/0 as char's then casts to int's and stores in array
     probably better to take them in as string then go through the strings
  */
  char in;
  
  for( int i = 0; i < r; i++){
    // get rid of new line
    scanf("%c",&in);
    
    for(int j = 0; j < c; j++){
      scanf("%c",&in);
      array[c * i + j] = in - '0';
    }
  }

}

int main() {
    int r,c;
    std::cin >> r >>c;
    
    int array[r*c];
    input(array, r, c);
    QFind connected(r*c);
    
    for (int i = 0 ; i < r; i++){
        for (int j = 0; j < c; j++){
            
            if ( j + 1 < c ){
                if( array[i * c + j] == array [i * c + j + 1] ){
                    connected.connect(i * c + j, i * c + j + 1 );
                }
            }
            
            if ( i + 1 < r ){
                if ( array[i * c + j] == array [(i+1) * c + j]){
                    connected.connect(i * c + j, (i+1) * c  + j  );
                }
            }
        }
    }

    int num_tests;
    std::cin>>num_tests;
  
  for(int i = 0; i < num_tests; i++){
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    x1--;
    x2--;
    y1--;
    y2--;
    
    if( connected.find(x1*c + y1, x2*c+y2)){
      if(array[x1*c+y1] == 0){
    printf("%s\n","binary");
      }else{
    printf("%s\n","decimal");
      }
    
    }else{
      printf("%s\n","neither" );
    }
  }
}
