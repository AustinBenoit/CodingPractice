#include <iostream>
#include <vector>
#include <set>

using namespace std;

void ZeroMatrix(vector<vector<int> >& matrix){
  set<int> rows;
  set<int> cols;

  for (int i = 0; i < matrix.size(); ++i){
    for (int j = 0; j < matrix[i].size(); ++j){
      if (matrix[i][j] == 0){
	rows.insert(i);
	cols.insert(j);
      }
    }
  }

  //Assumes that the matrix is a consistent size
  //i.e always a rectangular matrix.
  set<int>::iterator it;
  
  for (it = rows.begin(); it != rows.end(); ++it){
    for (int j = 0; j < matrix[*it].size(); ++j){
      matrix[*it][j] = 0;
    }
  }
  
  for (it = cols.begin(); it != cols.end(); ++it){
    for (int i = 0; i < matrix.size(); ++i){
      matrix[i][*it] = 0;
    }
  }
}


template<typename T>
void PrintArray (const vector<vector<T>>& array){
  for(int i = 0; i < array.size(); ++i){
    for(int j = 0; j < array[0].size(); ++j){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main(){

  vector<vector<int> > m1 {{1, 2, 3},
			   {4, 0, 5},
			   {6, 7, 8}};
  
  vector<vector<int> > m2 {{1, 2, 3, 0},
			   {4, 6, 7, 8}};
  ZeroMatrix(m1);
  PrintArray(m1);
  cout<<endl;

  ZeroMatrix(m2);
  PrintArray(m2);
  cout<<endl;
}
