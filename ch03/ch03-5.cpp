//输入全球和美国人口，并显示占比

#include <iostream>

using namespace std;

int main() 
{
    long long global_pop, us_pop;
    cout << " Enter the world's population: ";
    cin >> global_pop;
    cout << " Enter the population of the US: ";
    cin >> us_pop;
    double percent_us = (double) us_pop / global_pop * 100;
    cout << " The population of the US is " << percent_us << "% of the world's population." << endl;
    return 0;
}
