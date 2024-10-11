#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
void maxn(T a[], int n);

template<>
void maxn(char* a[], int n);

int main() {
    int arr[] = {10, 20, 30, 40, 50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxn(arr, n);
    double darr[] = {1.1, 2.2, 3.3, 4.4};
    int n2 = sizeof(darr)/sizeof(darr[0]);
    maxn(darr, n2);
    char* str[] = {"apple", "banana", "cherry", "date"};
    int n3 = sizeof(str)/sizeof(str[0]);
    maxn(str, n3);

    return 0;
}

template <typename T>
void maxn(T a[], int n) {
    T max = a[0];
    for(int i=1; i<n; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    cout << "Max value is: " << max << endl;
}

template<>
void maxn(char* a[], int n) {
    int max = 0;
    for(int i=0; i<n; i++) {
        int len = strlen(a[i]);
        if(len > max) {
            max = i;
        }
    }
    cout << "The string with max length is in : " << a + max << endl;
}