#include <iostream>
#include <string>

using namespace std;

int main() {
    string fname,lname;
    cout << "Enter your first name: ";
    getline(cin, fname);
    cout << "Enter your last name: ";
    getline(cin, lname);
    lname = lname + ", " + fname;
    cout << "Here's information of a single string: " << lname << endl;
    return 0;
}
