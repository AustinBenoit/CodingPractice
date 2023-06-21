/**********************************************************************
* Project       : 2048
*                                 
* Program name  : kattis_2048.cc
*
* Author        : Austin Benoit
*
* Date created  : 5 june 2018
* 
* Dependencies  : None
*
* Purpose       : Determine the output of the 2048 board after one move
*                 
* Input         : A 4X4 grid and the direction of the move
*
* Output        : The 2048 board after one move
*
**********************************************************************/

// need to fix summations down  and move down

#include <iostream>

#define BOARD_SIZE 4

void make_move( int board[BOARD_SIZE][BOARD_SIZE], int dir);

void move_left(int board[BOARD_SIZE][BOARD_SIZE]);
void move_right(int board[BOARD_SIZE][BOARD_SIZE]);
void move_up(int board[BOARD_SIZE][BOARD_SIZE]);
void move_down(int board[BOARD_SIZE][BOARD_SIZE]);

void print_board(int output[BOARD_SIZE][BOARD_SIZE]);


int main(){

  int board[BOARD_SIZE][BOARD_SIZE] = { };
  
  // 0, 1, 2, or 3 denotes a left, up, right, or down
  int movment_dir = 0; 

  for(int i = 0; i < BOARD_SIZE; i++){
    for(int j = 0; j < BOARD_SIZE; j++){
      std::cin >> board[i][j];
    }
  }

  std::cin >> movment_dir;
  make_move(board, movment_dir);

  print_board(board);
  

}

void make_move(int board[BOARD_SIZE][BOARD_SIZE], int dir){
    // 0, 1, 2, or 3 denotes a left, up, right, or down
  switch(dir){
  case 0 :
    move_left(board);
    break;
  case 1:
    move_up(board);
    break;
  case 2:
    move_right(board);
    break;
  case 3:
    move_down(board);
    break;
  }
  return;
}

void move_left(int board[BOARD_SIZE][BOARD_SIZE]){
  for( int i = 0; i < BOARD_SIZE; i++){
    int index = 0;
    int* sum_val = &board[i][0];
    
    // check for summations
    for (int j = 1; j < BOARD_SIZE; j++){
      if( *sum_val == board[i][j]){
	(*sum_val) *= 2;
	board[i][j] = 0;
	
	sum_val = &board[i][j];
	
      }else if (0 < board[i][j]){
	sum_val = &board[i][j];
      }
    }
  }
  // move left
  for( int i = 0; i < BOARD_SIZE; i++){
    for( int j = 0; j < BOARD_SIZE; j++){
      if( board[i][j] == 0){
	for( int k = j + 1; k < BOARD_SIZE; k++){
	  if( board[i][k] != 0){
	    board[i][j] = board[i][k];
	    board[i][k] = 0;
	    break;
	  }    
	}
      }
    }
  }
}

void move_right(int board[BOARD_SIZE][BOARD_SIZE]){
  for( int i = 0; i < BOARD_SIZE; i++){
    int index = 0;
    int* sum_val = &board[i][BOARD_SIZE - 1];
    
    // check for summations
    for (int j = BOARD_SIZE - 2; j >= 0; j--){
      if( *sum_val == board[i][j]){
	(*sum_val) *= 2;
	board[i][j] = 0;
	
	sum_val = &board[i][j];
	
      }else if (0 < board[i][j]){
	sum_val = &board[i][j];
      }
    }
  }
  
  
  //move right
  for(int i = 0; i < BOARD_SIZE; i++){
    for( int j = BOARD_SIZE - 1; j >= 0; j--){
      if(board[i][j] == 0){
	for( int k = j - 1; k >= 0; k--){
	  if( board[i][k] != 0){
	    board[i][j] = board[i][k];
	    board[i][k] = 0;
	    break;
	  }
	}
      }
    }
  }
}

void move_up(int board[BOARD_SIZE][BOARD_SIZE]){
  for( int j = 0; j < BOARD_SIZE; j++){
    int index = 0;
    int* sum_val = &board[0][j];
    
    // check for summations
    for (int i = 1; i < BOARD_SIZE; i++){
      if( *sum_val == board[i][j]){
	(*sum_val) *= 2;
	board[i][j] = 0;
	
	sum_val = &board[i][j];
	
      }else if (0 < board[i][j]){
	sum_val = &board[i][j];
      }
    }
  }

  //move up
  for( int j = 0; j < BOARD_SIZE; j++){
    for( int i = 0; i < BOARD_SIZE; i++){
      if( board[i][j] == 0){
	for( int k = i + 1; k < BOARD_SIZE; k++){
	  if( board[k][j] != 0){
	    board[i][j] = board[k][j];
	    board[k][j] = 0;
	    break;
	  }    
	}
      }
    }
  }
}

void move_down(int board[BOARD_SIZE][BOARD_SIZE]){

  for( int j = 0; j < BOARD_SIZE; j++){
    int index = 0;
    int* sum_val = &board[BOARD_SIZE - 1][j];
    
    // check for summations
    for (int i = BOARD_SIZE - 2; i >= 0; i--){
      if( *sum_val == board[i][j]){
	(*sum_val) *= 2;
	board[i][j] = 0;
	
	sum_val = &board[i][j];
	
      }else if (0 < board[i][j]){
	sum_val = &board[i][j];
      }
    }
  }

  //move down
   for(int j = 0; j < BOARD_SIZE; j++){
    for( int i = BOARD_SIZE - 1; i >= 0; i--){
      if(board[i][j] == 0){
	for( int k = i - 1; k >= 0; k--){
	  if( board[k][j] != 0){
	    board[i][j] = board[k][j];
	    board[k][j] = 0;
	    break;
	  }
	}
      }
    }
  }
}

void print_board(int output[BOARD_SIZE][BOARD_SIZE]){
  
  for(int i = 0; i < BOARD_SIZE; i++){
    for(int j = 0; j < BOARD_SIZE; j++){
      std::cout << output[i][j];
      if( j != BOARD_SIZE - 1) std::cout << " ";
    }
    std::cout << std::endl;
  }
  
  
  return;
}
