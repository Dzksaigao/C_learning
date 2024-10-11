#include <iostream>
#include<cstring>
using namespace std;

int main() {
    cout << "Enter words (to stop, type 'done'): " << endl;
    char word[100];
    int count = 0;
    while (cin >> word && strcmp(word, "done")) {
        count++;
    }
    cout << "Number of words: " << count << endl;
    return 0;
}