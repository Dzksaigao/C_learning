#include <iostream>

using namespace std;

struct CandyBar {
    string name;
    double weight;
    int calories;
};

void InPutCandyBar(CandyBar& candy,char* name = "Milliennium Munch", double weight = 2.85, int calories = 350) ;
void ShowCandyBar(const CandyBar& candy) ;

int main() {
    CandyBar candy;
    char name[20];
    double weight;
    int calories;
    cin >> name >> weight >> calories;
    InPutCandyBar(candy,name,weight,calories);
    ShowCandyBar(candy);
    return 0;
}

void InPutCandyBar(CandyBar& candy,char* name, double weight, int calories) {
    candy.name = name;
    candy.weight = weight;
    candy.calories = calories;
}

void ShowCandyBar(const CandyBar& candy) {
    cout << "Name: " << candy.name << endl;
    cout << "Weight: " << candy.weight << " oz" << endl;
    cout << "Calories: " << candy.calories << " cal" << endl;
}


