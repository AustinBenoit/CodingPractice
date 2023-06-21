#include <iostream>

int not_island_born(){
    int cur_pop;
    int last_pop = 0;
    int not_island_born = 0;

    /* get inital population */
    std::cin>>cur_pop;
    for( last_pop = cur_pop; cur_pop != 0 ; std::cin>>cur_pop){
        /* Check if population has changed*/
        if( last_pop != cur_pop){
            /* see if the population is all from last time */
            if( last_pop * 2 < cur_pop ){
                not_island_born += cur_pop - last_pop * 2;
            }
        }
        last_pop = cur_pop;
    }
    return not_island_born ;
}

int main() {
    int no_test;
    std::cin>>no_test;
    for(int i = 0; i < no_test; i++){
        std::cout << not_island_born()<<std::endl;
    }
}
