#include <iostream>
#include "name.h"

int main(){
    double ar[] = {1000,2000,3000,4000};
    SALES::Sales s;
    SALES::setSales(s,ar,SALES::QUARTERS);
    SALES::showSales(s);
    SALES::setSales(s);
    SALES::showSales(s);
    return 0;
}
