#include <iostream>

class Dice_Prob{
  private:
  int c1, c2;
  int range;
  int* prob;
  
  public: 
  Dice_Prob(int c1, int c2){
      this->c1 = c1;
      this->c2 = c2; 
      range = c1 + c2;
      prob = new int[range + 1];
      
      for(int i = 1; i <= c1; i++){
          for(int j = 1; j <= c2; j++){
              int sum = i + j;
              prob[sum]++;
          }
      }
  }
  
  void print_max_prob(){
      int max = get_max_prob();
      for(int i = 0; i <= range; i++){
            if (prob[i] == max){
                std::cout <<i <<std::endl;
            }
        }
  }
  
  private:
    int get_max_prob (){
        int max = 0;
        for(int i = 0; i <= range; i++){
            if (prob[i] > max) max = prob[i];
        }
        return max;
    }
};

int main() {
    int s1, s2;
    std::cin>>s1>>s2;
    Dice_Prob d1(s1, s2);
    d1.print_max_prob();
}
