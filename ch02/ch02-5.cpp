//main调用一个摄氏度转华氏度的函数，并按格式输出结果

#include <iostream>

using namespace std;

double CelsiusToFarhenheit (double celsius);

int main()
{
    double celsius, farhenheit;
    cout << "Please enter a Celsius value:";
    cin >> celsius;
    farhenheit = CelsiusToFarhenheit(celsius);
    cout << celsius << "degrees Celsius is " << farhenheit <<" degrees Farhenheit." <<endl;
    return 0;
}

double CelsiusToFarhenheit (double celsius)
{
    return (celsius *1.8 + 32.0);
}