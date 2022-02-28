#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool oneAway(const string& str1, const string& str2){
  // White space and capitalization matters in for this function.

    bool difference_seen = false;
  // if strings are same length then only need to find character differences
    if (str1.size() == str2.size()){
      for (int i = 0; i < str1.size(); ++i){
	if(str1[i] != str2[i]){
	  if(difference_seen){
	    return false;
	  }
	  difference_seen = true;
	}
      }
    }

    // not ideal to be copying but still.
    string shorter;
    string longer;
    // Strings can only be one char away from each other
    if (str1.size() + 1 == str2.size()){
      shorter = str1;
      longer = str2;
    } else if (str1.size() == str2.size() + 1){
      shorter = str2;
      longer = str1;
    } else {
      // More than one away
      return false;
    }
    
    // Always want to look from the smaller string perspective to look ahead.
    // Thus if can't find letter at or ahead there is two differences.
    // The shorter string can never be missing a letter.

    for (int i = 0, j = 0; i < shorter.size(); ++i, ++j){
      if (shorter[i] == longer[j]){
        continue;
      } if (!difference_seen && shorter[i] == longer[j + 1]){
        ++j;
        difference_seen = true;
      } else {
        return false;
      }
    }
  return true;
}

class TestCase {
public:
  string str1, str2;
  bool one_away;
  TestCase(string str1, string str2, bool one_away){
    this->str1 = str1;
    this->str2 = str2;
    this->one_away = one_away;
  }
};

int main (int argc, char** argv){
  vector<TestCase> test_data
    {TestCase("aaa", "aa", true),
     TestCase("aa", "aaa", true),
     TestCase("pale", "ple", true),
     TestCase("pale", "pales", true),
     TestCase("ple", "pale", true),
     TestCase("", "adsljatkrewlk", false),
     TestCase("pale", "bake", false)};

  for (auto& t: test_data){
    if(t.one_away == oneAway(t.str1, t.str2)){
      cout<<"pass"<<endl;
    } else {
      cout<<"fail"<<endl;
    }
  }
}
