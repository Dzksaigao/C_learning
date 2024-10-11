#include <iostream>

using namespace std;
const int ArSize = 10;

int main() {
    double donation[ArSize];
    double sum = 0.0,average = 0.0;
    int count = 0,countbig = 0;
    cout << "Enter donations: ";
    while(cin >> donation[count] && count < ArSize) {
        sum += donation[count];
        count++;
    }
    average = sum / count;
    for(int i = 0; i < count; i++) {
        if(donation[i] > average) {
            countbig++;
        }
    }
    cout << "Number of donations greater than average: " << countbig << endl;
    cout << "Total donations: " << sum << endl;
    cout << "Average donation: " << average << endl;
    return 0;
}