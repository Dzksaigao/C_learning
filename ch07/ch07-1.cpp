#include <iostream>

using namespace std;

double HarmonicMean(double num1, double num2);

int main(){
    cout << "Enter two numbers: ";
    double num1, num2;
    while(cin >> num1 >> num2 && num1 != 0 && num2 != 0){
        cout << "Harmonic mean of " << num1 << " and " << num2 << " is " << HarmonicMean(num1, num2) << endl;
        cout << "Enter two numbers: ";
    }
    return 0;
}

double HarmonicMean(double num1, double num2)
{
    return 2/(1/num1 + 1/num2);
}

