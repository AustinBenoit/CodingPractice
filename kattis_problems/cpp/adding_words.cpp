#include <map>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

std::string outputVal(std::map<std::string, int> &env, std::string equation){
  std::istringstream sl (equation);
  std::string term;
  std::string oper;
  int total = 0;  
  // adding in the first /load up term 
  
  sl >> term;  
  if( env.find(term) == env.end() ){
    return "unknown";
  } else {
    total = env[term];
  }

  sl >> oper;
  
  while (oper.compare("=") != 0){ 
      sl>>term;
      if( env.find(term) == env.end() ){
	return "unknown";
      }
      if (oper.compare("+") == 0){
	total += env[term];
      } else if (oper.compare("-") == 0){
	total -= env[term];
      }
      
      sl >> oper;
  }

  for ( const auto &kv : env ) {
    if ( kv.second == total)
      return kv.first;
  }
  
  return "unknown";
}

int main (){

  std::map<std::string, int> env;
  std::string line;

    while(std::getline(std::cin, line) ){
      std::istringstream sl (line);
      std::string func;
      sl >> func;


      if (func.compare("def") == 0){
	std::string name;
	int value;

	sl >> name >> value;
	env[name] = value;
      }
      else if (func.compare("calc") == 0) {
	
	std::cout << line.substr(5)
		  << " " << outputVal(env, line.substr(5))
		  << std::endl;

	
      } else {
	env.clear();
      }
      

    }
	   
    return 0;
}
