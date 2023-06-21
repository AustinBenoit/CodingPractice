#include <string>
#include <iostream>
#include <map>



class Converters{
  private:
  std::map<char,std::string> mapping;

  public:
  Converters(){
  
    mapping['a'] =  "@";         mapping['b'] = "8";         mapping['c'] = "(";
    mapping['d'] = "|)";         mapping['e'] = "3";         mapping['f'] = "#";
    mapping['g'] = "6";          mapping['h'] = "[-]";       mapping['i'] = "|";
    mapping['j'] = "_|";         mapping['k'] = "|<";        mapping['l'] = "1";
    mapping['m'] = R"([]\/[])";  mapping['n'] = R"([]\[])";  mapping['o'] = "0";
    mapping['p'] = "|D";         mapping['q'] = "(,)";       mapping['r'] = "|Z";
    mapping['s'] = "$";          mapping['t'] = "']['";      mapping['u'] = "|_|";
    mapping['v'] = R"(\/)";      mapping['w'] = R"(\/\/)";   mapping['x'] = "}{";
    mapping['y'] = R"(`/)";      mapping['z'] = "2"; 
  }
  
  void convert_str(std::string str){
    int x = str.length();
    for (int i = 0; i < x; i++ ){
        std::cout<<con(str[i]);
    }
}
  private:
    std::string con(char c){
        char lower = tolower(c);
      
      auto it = mapping.find(lower);
      if (it != mapping.end()){
          return it->second;
      }
      std::string s(1, c);
      return s;
    }
  
  
};

int main() {
    Converters A;
    std::string str;
    std::getline (std::cin,str);
    A.convert_str(str);

}
