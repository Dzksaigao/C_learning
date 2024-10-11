#include <iostream>

using namespace std;

const int MAX_NUM = 10;
int GalfGrades(int grades[]);
int displayGrades(int grades[]);
int average(int grades[],int count);


int main() {
    int grades[MAX_NUM] = {0};
    int count = 0;
    count = GalfGrades(grades);
    displayGrades(grades);
    cout << "The average is: " << average(grades,count) << endl;
    return 0;
}

int GalfGrades(int grades[]) {
    int count = 0;
    cout << "Enter the grade:(q to quit)";
    while (count < MAX_NUM && (cin >> grades[count]) ) {
        cout << "Enter the grade:(q to quit)";
        count++;
    }
    return count;
}

int displayGrades(int grades[]) {
    int count = 0;
    while (count < MAX_NUM) {
        cout << "Grade " << count+1 << ": " << grades[count] << endl;
        count++;
    }
    return 0;
}

int average(int grades[], int count) {
    int sum = 0;
    int i = 0;
    while (i < count) {
        sum += grades[i];
        i++;
    }
    return sum / MAX_NUM;   
}
