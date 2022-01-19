#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

bool StringRotation (const string& str1, const string& str2){
  if (str1.size() != str2.size())
    return false;
  string test = str1;
  test.append(str1);
  size_t pos = test.find(str2);
  if (pos == string::npos){
    return false;
  }
  return true;
}


int main() {
  vector<tuple<string, string, bool> > test_data
    {make_tuple("waterbottle", "bottlewater", true),
     make_tuple("abc", "abc", true),
     make_tuple("foo", "ofo", true),
     make_tuple("abc", "def", false),
     make_tuple("a", "aa", false),
     make_tuple("thebestaround", "therestaround", false),
     make_tuple("abcdefghijklmnopqrstuvwxyz", "bcdefghijklmnopqrstuvwxyza", true)
    };

  for (auto& test_case : test_data){
    if (get<2>(test_case)
	== StringRotation(get<0>(test_case), get<1>(test_case))){
      cout<<"PASS"<<endl;
    } else {
      cout<<"FAIL"<<endl;
    }
  }
}
