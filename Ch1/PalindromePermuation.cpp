#include <vector>
#include <string>
#include <iostream>
#include <ctype.h>
#include <utility>
#include <map>

using namespace std;

bool isPalindromePermuation(const string& reference_str){
  // White space matters. Case insensitive.

  map<char,int> char_count;
  for (auto& c: reference_str) {
    ++char_count[tolower(c)];
  }

  //In the case of an even length sting this
  //is preset as true as we can not see any odd strings
  bool seenOdd = !(reference_str.size() % 2);
  for(auto& cc : char_count){
    if(cc.second % 2){
      if(seenOdd){
        return false;
      }
      seenOdd = true;
    }
  }
  return true;
}


int main (int argc, char** argv) {
  vector<pair<string, bool> > test_data
    { make_pair("tacoCat", true),
      make_pair("foo", true),
      make_pair("bar", false),
      make_pair("barra", true),
      make_pair("racecar", true)};

  for (auto& test_case : test_data) {
    if (test_case.second == isPalindromePermuation(test_case.first)){
      cout<<"Pass"<<endl;
    } else {
      cout<<"Fail"<<endl;
    }
  }

}
