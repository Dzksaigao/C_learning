#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    int age;
    char grade; //fname[20], lname[20];
    string fname, lname;
    cout << " What is your first name? ";
    //cin.getline(fname, 20);
    getline(cin, fname);
    cout << " What is your last name? ";
    //cin.getline(lname, 20);
    getline(cin, lname);
    cout << " What letter grade did you deserve? ";
    cin >> grade;
    cout << " What is your age? ";
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << ++grade << endl;
    cout << "Age: " << age << endl;
    return 0;
}