#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>
#include <ctype.h>

using namespace std;

bool isUnique(string str){
  unordered_set<char> seenChar;

  unordered_set<char>::const_iterator found;

  for (char& c : str){
    found = seenChar.find(tolower(c));
    if (found != seenChar.end()){
      return false;
    }
    
    seenChar.insert(tolower(c));
  }
  
  return true;
}

int main() {
  vector<pair<string, bool> > testData =
    {{"a", true},
     {"aa", false},
     {"Foo",false},
     {"Bar", true},
     {"Aa", false}};

  for (auto& testCase : testData){
    if (testCase.second == isUnique(testCase.first)){
      cout<<"Pass"<<endl;
    } else {
      cout<< "Fail"<<endl;
    }
  }
}
