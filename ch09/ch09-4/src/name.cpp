#include <iostream>
#include "name.h"

namespace SALES{
    void setSales(Sales& s,const double ar[],int n){
        double sum = 0;
        for (int i = 0; i < n; i++){
            s.sales[i] = ar[i];
            sum += ar[i];
            if (s.max < ar[i]) s.max = ar[i];
            if (s.min > ar[i]) s.min = ar[i];
        }
        s.average = sum / n;
    }

    void setSales(Sales& s){
        double ar[QUARTERS];
        int count = 0;
        std::cout << "Enter sales for quarter " << count+1 << ": ";
        while (count++ < QUARTERS && (std::cin >> ar[count]) != '\n')
            std::cout << "Enter sales for quarter " << count+1 << ": ";
        setSales(s,ar,count);
    }

    void showSales(const Sales& s){
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++){
            std::cout << s.sales[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Average: " << s.average << std::endl;
        std::cout << "Max: " << s.max << std::endl;
        std::cout << "Min: " << s.min << std::endl;
    }
}

