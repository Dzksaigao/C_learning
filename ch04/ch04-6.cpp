#include <iostream>
#include <string>
using namespace std;

struct CandyBar {
        string brand;
        double weight;
        int calories;
    };

int main() {
    
    CandyBar snack[3] = {
    {"Mocha Munch", 2.3, 350},
    {"Fruit Punch", 2.2, 300},
    {"Caramel Munch", 2.1, 250},
    };

    cout << "Snack 1:" << endl;
    cout << "Brand: " << snack[0].brand << endl;
    cout << "Weight: " << snack[0].weight << endl;
    cout << "Calories: " << snack[0].calories << endl;

    cout << "Snack 2:" << endl;
    cout << "Brand: " << snack[1].brand << endl;
    cout << "Weight: " << snack[1].weight << endl;
    cout << "Calories: " << snack[1].calories << endl;

    cout << "Snack 3:" << endl;
    cout << "Brand: " << snack[2].brand << endl;
    cout << "Weight: " << snack[2].weight << endl;
    cout << "Calories: " << snack[2].calories << endl;

    return 0;
}