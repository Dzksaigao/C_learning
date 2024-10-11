#include <iostream>

using namespace std;
const int strsize = 100;



int main() {
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int perference;
} bops[strsize];

cout << "Benevolent Order of Programmers" << endl;
cout << "Enter your choice: ";

char choice;
while((cin>>choice) && (choice!='q')){
    switch (choice) {
        case 'a':
            for(int i=0;i<strsize;i++){
                cout << bops[i].fullname << endl;
            }
            break;
        case 'b':
            for(int i=0;i<strsize;i++){
                cout << bops[i].title << endl;
            }
            break;
        case 'c':
            for(int i=0;i<strsize;i++){
                cout << bops[i].bopname << endl;
            }
            break;
        case 'd':
            for(int i=0;i<strsize;i++){
                if (bops[i].perference == 0)
                    cout << bops[i].fullname << endl;
                    else if (bops[i].perference == 1)
                        cout << bops[i].title << endl;
                    else if (bops[i].perference == 2)
                        cout << bops[i].bopname << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
        cout << "Next choice: ";
    }
    cout << "Bye!" << endl;
    return 0;
}