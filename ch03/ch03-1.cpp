//用户使用一个整数表示身高（英寸），然后将身高转化为英尺和英寸。用下划线来指示输入位置。使用const符号常量来表示转换因子

#include <iostream>

const int INCH_PER_FOOT = 12;

using namespace std;

int main() 
{
    int inches,feet,inches_left;
    cout << " Enter your height in inches: ______\b\b\b\b\b\b";
    cin >> inches;
    feet = inches / INCH_PER_FOOT;
    inches_left = inches % INCH_PER_FOOT;
    cout << " Your height is: " << feet << " feet and " << inches_left << " inches. " << endl;
    return 0;
}
