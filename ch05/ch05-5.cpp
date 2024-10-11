#include <iostream>

using namespace std;
const int MONTHS = 12,YEARS = 3;

int main() {
    const char* months[MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[YEARS][MONTHS], totalSales[YEARS] = {0, 0, 0},sum = 0;
    for (int y=1; y<=YEARS; y++) {
        for(int i=0; i<MONTHS; i++) {
            cout << "The sales volume of " << months[i] << " in year "<< y << " is:" << endl;
            cin >> sales[y-1][i];
            totalSales[y-1] += sales[y-1][i];
        }
        sum += totalSales[y-1];
    }
    for(int i=0; i<YEARS; i++) {
        cout << "The total sales volume of year " << i+1 << " is: " << totalSales[i] << endl;
    }
    cout << "The total sales volume of all years is: " << sum << endl;
    return 0;
}


