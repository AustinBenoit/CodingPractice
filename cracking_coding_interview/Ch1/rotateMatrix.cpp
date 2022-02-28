#include <iostream>
#include <vector>
#include <cstdint>
#include <iostream>
#include <memory>

using namespace std;

void RotateMatrix(vector<vector<char>>& pixel_array){
  int len = pixel_array[0].size();

  for (int i = 0; i < (len+ 1) / 2; ++i){
    for(int j = 0; j < len / 2; ++j){
      char temp = pixel_array[len - 1 - j][i];
      pixel_array[len-1-j][i] = pixel_array[len-1-i][len-1-j];
      pixel_array[len-1-i][len-1-j] = pixel_array[j][len-1-i];
      pixel_array[j][len-1-i] = pixel_array[i][j];
      pixel_array[i][j] = temp;
    }
  }

}

void PrintArray (const vector<vector<char>>& array){
  for(int i = 0; i < array.size(); ++i){
    for(int j = 0; j < array[0].size(); ++j){
      cout<<array[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main (){
  vector<vector<char> > test1 {{'a', 'b', 'c'},
			       {'d', 'e', 'f'},
			       {'g', 'h', 'i'}};

  PrintArray(test1);
  RotateMatrix(test1);
  PrintArray(test1);

  vector<vector<char> > test2 {{'a', 'a', 'a', 'a'},
                               {'b', 'b', 'b', 'b'},
			       {'c', 'c', 'c', 'c'},
			       {'d', 'd', 'd', 'd'}};

  PrintArray(test2);
  RotateMatrix(test2);
  PrintArray(test2);
}
