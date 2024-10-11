#include <iostream>

using namespace std;

struct car {
    string make;
    int year;
};

int main() {
    cout << "How many cars do you wish to catalogue? ";
    int num_cars;
    cin >> num_cars;
    cin.get();

    car*  cars = new car[num_cars];

    for (int i = 0; i < num_cars; i++) {
        cout << "Car #" << i+1 <<":"<< endl;
        cout << "Please enter the make of the car: ";
        getline(cin, cars[i].make);
        cout << "Please enter the year of the car: ";
        (cin >> cars[i].year).get();
    }
    cout << "Here is your collection " << endl;
    for (int i = 0; i < num_cars; i++) {
        cout << cars[i].year << " " << cars[i].make << endl;
    }

    delete[] cars;
    return 0;
}
