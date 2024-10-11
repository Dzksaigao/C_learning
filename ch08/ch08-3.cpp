#include <iostream>

using namespace std;


int main() {
    string str;
    cout << "Enter a string(q to quit): ";
    while (getline(cin, str) && str[0]!='q'){
        for (int i = 0; i < str.length(); i++) {
            str[i] = toupper(str[i]);
        }
        cout << str << endl;
        cout << "Enter a string(q to quit): ";
    }
    cout << "Bye!" << endl;
    return 0;
}
    