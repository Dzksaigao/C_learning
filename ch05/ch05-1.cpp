#include <iostream>

using namespace std;

int main() {
    cout << "Enter a number: ";
    int num1, num2, sum=0;
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;
    for(int i=num1; i<=num2; i++)
        sum += i;
        cout << "The sum of the numbers between " << num1 << " and " << num2 << " is " << sum << endl;
    return 0;
}
