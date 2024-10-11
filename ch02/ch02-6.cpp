//main调用函数输入光年值，返回对应天文单位

#include <iostream>

using namespace std;

double LightyearToAsunit (double lightyears);

int main() 
{
    double lightyears,asunits;
    cout <<"Enter the nmber of light years:";
    cin >> lightyears;
    asunits = LightyearToAsunit(lightyears);
    cout << lightyears << " light years = " << asunits << " astronomical units." << endl;
    return 0;
}

double LightyearToAsunit (double lightyears)
{
    return lightyears * 63240;
}
