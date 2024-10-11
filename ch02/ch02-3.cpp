//编写一个C++程序，它使用3个用户定义的函数，并生成下面的输出

#include <iostream>
using namespace std;

void printc1();
void printc2();

int main()
{
    printc1();
    printc1();
    printc2();
    printc2();
    return 0;
}

void printc1()
{
    cout << "Three blind mice"<< endl;
}

void printc2()
{
    cout << "See how they run" << endl;
}