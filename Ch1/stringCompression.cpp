#include <string>
#include <utility>
#include <vector>
#include <iostream>

using namespace std;

string CompressString (string& str) {
  string output;

  if( str.size() == 0)
    return str;

  // Base Case Start everything as having seen the first char
  // enable the loop to not have to cover this case. 
  int char_count = 1;
  char last_seen = str[0];
  output += str[0];
  for (int i = 1; i < str.size(); ++i) {
    if(last_seen != str[i]) {
      output += to_string(char_count);
      output+= str[i];
      char_count = 1;
      last_seen = str[i];
    } else {
      char_count++;
    }
  }
  // Need to put the last count on the string
  output += to_string(char_count);

  if(output.size() < str.size()){
    return output;
  }
  return str;
}

int main (int argc, char** argv) {
  vector<pair< string, string > > test_cases
    {make_pair("aaa", "a3"),
     make_pair("ab", "ab"),
     make_pair("abc", "abc"),
     make_pair("aaabbbccc","a3b3c3"),
     make_pair("", ""),
     make_pair("aabcccccaaa", "a2b1c5a3")};

  for(auto& tc : test_cases){
    if (tc.second == CompressString(tc.first)) {
      cout<<"Pass"<<endl;
    } else {
      cout<<"Fail "<<tc.first << " " << CompressString(tc.first) <<endl;
    }
  }
}
