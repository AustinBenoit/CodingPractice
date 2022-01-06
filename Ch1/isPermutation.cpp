#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <map>
#include <ctype.h>

using namespace std;

bool isPermutation (string str1, string str2){
  // Go through first string and add all characters to the map
  // and the number of times seen.
  // Then go though second string and remove / reduced the number of
  // of times seen. The strings will be a permutation when the set is empty

  // A map is probably over kill but I wanted to get better using them.
  map<char,int> seenChars;
  map<char,int>::iterator it;

    for(auto& c : str1){
      // Maps always initialize a int to be 0
      seenChars[tolower(c)] = ++seenChars[tolower(c)];
    }

    for(auto& c : str2){
      it = seenChars.find(tolower(c));
      
      if (it == seenChars.end()){
        return false;
      } else {
        seenChars[c] = --seenChars[c];
        if(seenChars[c] == 0 ){
          seenChars.erase(it);
        }
      }
      if(!seenChars.empty()){
        return false;
      }
    }

  return true;
}

int main (){
  vector<tuple<bool, string, string> > test_data =
    { make_tuple(true, "foo", "oof"),
      make_tuple(false, "abc", "def"),
      make_tuple(true, "BaZ", "bAz"),
      make_tuple(false, "Hello", "Hola"),
      make_tuple(false, "aaa", "aa"),
      make_tuple(false, "aab", "aaabb"),
      make_tuple(true, "aaaa", "aaaa")};
    
  for (auto& tc: test_data){
    if (get<0>(tc) == isPermutation(get<1>(tc), get<2>(tc))){
      cout<<"Pass"<<endl;
    } else {
      cout<<"Fail"<<endl;
    }
  }
}
