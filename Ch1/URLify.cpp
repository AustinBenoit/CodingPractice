#include <string>
#include <vector>
#include <tuple>
#include <utility>
#include <iostream>

using namespace std;

void convertToUrl (string& input_str){

  /* Starting at the back of the string move to the start of the string. 
     While the first non white space character has not been encountered 
     continue moving forward. Move each non white space character to the 
     end of the string. If the first non white space character has been seen
     then every time a new white space character is seen while moving it replace 
     it */

  // Potential issue is how to deal with only white space
  // I am just going to ignore this case. 

  string::iterator char_to_move = input_str.end();
  string::iterator new_char_pos = input_str.end();

  --char_to_move; // The end is one past the actual end of the string.
  while(*char_to_move == ' '){
    char_to_move--;
  }
  
  // I don't actually see the first character but it does not matter
  // I should never move the first char.
  for(; char_to_move != input_str.begin(); char_to_move--){
    if (*char_to_move == ' '){
      *(--new_char_pos) = '0';
      *(--new_char_pos) = '2';
      *(--new_char_pos) = '%';
    } else {
      *(--new_char_pos) = *char_to_move;
    }
  }
}

int main(int argc, char** argv){
  vector<pair<string, string> > test_data
    { make_pair("A A  ", "A%20A"),
      make_pair("a  a    ", "a%20%20a"),
      make_pair("Mr John Smith    ", "Mr%20John%20Smith")
    };

  for (auto& test_case : test_data){
    convertToUrl(test_case.first);
    if (test_case.first == test_case.second){
      cout<<"Pass"<<endl;
    } else {
      cout<<"Fail"<<endl<<test_case.first<<endl;
    }
  }
}
