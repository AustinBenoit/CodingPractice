#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    
    int integer1, integer2, integer3;
    cin>> integer1 >>integer2>>integer3;
    
    if ( integer1 == integer2 + integer3){
        printf("%d=%d+%d", integer1, integer2, integer3);
    }
    else if ( integer1 == integer2 - integer3){
        printf("%d=%d-%d", integer1, integer2, integer3);
    }
    else if ( integer1 == integer2 * integer3){
        printf("%d=%d*%d", integer1, integer2, integer3);
    }
    else if ( integer1 == integer2 / integer3){
        printf("%d=%d/%d", integer1, integer2, integer3);
    }
    else if ( integer3 == integer1 + integer2){
        printf("%d+%d=%d", integer1, integer2, integer3);
    }
    else if ( integer3 == integer1 - integer2){
        printf("%d-%d=%d", integer1, integer2, integer3);
    }
    else if ( integer3 == integer1 * integer2){
        printf("%d*%d=%d", integer1, integer2, integer3);
    }
    else if ( integer3 == integer1 / integer2){
        printf("%d/%d=%d", integer1, integer2, integer3);
    }
