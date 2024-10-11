#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter words (to stop, type done): " << endl;
    int count = 0;
    while (cin >> str && str!= "done") {
        count++;
    }
    cout << "Number of words: " << count << endl;
    return 0;
}