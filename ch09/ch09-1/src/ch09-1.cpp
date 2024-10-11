#include <iostream>
#include "golf.h"

int main(){
    golf g;
    setgolf(g, "John Smith", 12);
    showgolf(g);
    int stop = 1;
    while(stop){
        stop = setgolf(g);
        if(stop) showgolf(g);
    }
    
    return 0;
}