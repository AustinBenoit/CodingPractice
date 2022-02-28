#include <iostream>
#include <string>

int main() {
    int limit, events;
    int curr_on = 0;
    int groups_not_allowed = 0;
    std::cin>>limit>>events;
    
    for(int i = 0; i < events; i++){
        std::string action;
        int group;
        std::cin>>action>>group;
        
        if( action == "enter"){
            if (curr_on + group <= limit){
                curr_on += group;
            }else{
                groups_not_allowed++;
            }
        }else{
            curr_on -= group;
        }
    }
    std::cout<<groups_not_allowed;
}
