//编写一个C++程序，他要求用户输入一个以long为单位的距离，然今后将它转化为码（一long等于220码）
#include <iostream>
using namespace std;

int main()
{
    int longs;
    cout << "Enter a distance in longs:" << endl;
    cin >> longs;
    int ma = longs * 220;
    cout << "The distance in miles is:" << ma << endl;
    return 0;
}