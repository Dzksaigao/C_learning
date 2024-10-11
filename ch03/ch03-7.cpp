//按欧洲风格输入耗油量（每100公里消耗的汽油量L），然后将其转化为美国风格（每加仑多少英里）。100公里=62.14英里，1加仑=3.875升
#include<iostream>
using namespace std;

int main()
{
    double mpg, FuelsPerKm;
    cout << "Enter Fuel Consumption in 100 km in L: ";
    cin >> FuelsPerKm;
    mpg = 62.14*3.875 / FuelsPerKm;
    cout << "Miles per gallon: " << mpg << endl;
    return 0;
}
