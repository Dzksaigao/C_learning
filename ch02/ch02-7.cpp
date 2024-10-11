//输入小时和分钟，由一个void函数输出

#include <iostream>

using namespace std;

void printTime(int hours, int minutes) ;

int main() 
{
    int hours,minutes;
    cout << "Enter the hours: ";
    cin >> hours;
    cout  << "Enter the minutes: ";
    cin >> minutes;
    printTime(hours,minutes);
    return 0;
}

void printTime(int hours, int minutes) 
{
    cout << " Time: " << hours << ":" << minutes << endl;
}

