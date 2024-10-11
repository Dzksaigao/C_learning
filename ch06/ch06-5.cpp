#include <iostream>

using namespace std;

int main() {
    double tvarps = 0.0,tex = 0.0;
    cout << "Enter tvarps: ";
    while((cin >> tvarps) && tvarps >= 0) {
        tex = 0.0;
        if (tvarps > 35000) 
            tex += (tvarps - 35000) * 0.2 + 4000;
        else if (tvarps > 15000)
            tex += (tvarps - 15000) * 0.15 + 1000;
        else if (tvarps > 5000)
            tex += (tvarps - 5000) * 0.1;
        else tex = 0.0;
        cout << "tex = " << tex << endl;
        cout << "Enter tvarps: ";
    }
    return 0;
}