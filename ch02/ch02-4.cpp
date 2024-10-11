//输入年龄，显示该年龄包含多少个月

#include <iostream>

using namespace std;

int main() 
{
    cout << "Enter your age:" ;
    int age;
    cin >> age;
    int months = age * 12;
    cout << "You are " << age << " years old, which is equivalent to " << months << " months." << endl;
    return 0;
}