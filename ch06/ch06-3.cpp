#include <iostream>

using namespace std;

int main() {
    cout << "Please enter one of the following options:\n";
    cout << "c) carnivore\t" << "p) pianist\n";
    cout << "t) tree\t" << "g) game\n";
    cout << "Please enter a c,p,t, or g: ";
    char choice;
    while((cin >> choice) && (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')) {
        cout << "Invalid input. Please enter a c,p,t, or g: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    switch(choice) {
        case 'c':
            cout << "A maple is a carnivore.\n";
            break;
        case 'p':
            cout << "A maple is a pianist.\n";
            break;
        case 't':
            cout << "A maple is a tree.\n";
            break;
        case 'g':
            cout << "A maple is a game.\n";
            break;
    }
    return 0;
}