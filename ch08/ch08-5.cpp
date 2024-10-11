#include <iostream>

using namespace std;
const int SIZE = 5;

template<typename T> 
void max5(T a[SIZE]);

int main(){
    int arr[SIZE] = {1, 2, 3, 4, 5};
    max5(arr);
    double darr[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    max5(darr);
    return 0;
}

template<class T> 
void max5(T a[SIZE]){
    T max = a[0];
    for(int i = 1; i < SIZE; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    cout << "The maximum value is: " << max << endl;
}