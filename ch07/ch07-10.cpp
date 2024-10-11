#include <iostream>

using namespace std;

double add(double a, double b) {
    return a + b;
}

double calculate(double a, double b, double (*op)(double, double)) {
    return op(a, b);
}

int main() {
    double q = calculate(2.5,10.4,add);
    cout << q << endl;
    return 0;
}
