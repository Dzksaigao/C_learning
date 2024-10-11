//输入驱车里程（英里）和使用汽油量（加仑），然后指出汽车耗油量为一加仑的里程。
#include <iostream>
using namespace std;

int main() 
{
    double miles, gallons, mpg;
    cout << "Enter miles driven: ";
    cin >> miles;
    cout << "Enter gallons of gas used: ";
    cin >> gallons;
    mpg = miles / gallons;
    cout << "Miles per gallon: " << mpg << endl;
    return 0;
}