#include <iostream>

using namespace std;

int Factorial(int n) {
    return n <= 1? 1 : n * Factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    while (cin >> n && n >= 0) {
    cout << "Factorial of " << n << " is " << Factorial(n) << endl;
    }

    return 0;
}