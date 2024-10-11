#include <iostream>

using namespace std;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);
const int SIZE = 5;

int main()
{

    double arr[SIZE];

    // Fill the array with cin
    Fill_array(arr, SIZE);

    // Show the array
    Show_array(arr, SIZE);

    // Reverse the array
    Reverse_array(arr, SIZE);

    // Show the reversed array
    Show_array(arr, SIZE);

    Reverse_array(arr+1, SIZE-2);

    Show_array(arr, SIZE);

    return 0;
}

int Fill_array(double arr[], int size)
{
    int count = 0;
    cout << "Enter a number: ";
    while(cin >> arr[count] && count < size){
        cout << "Enter a number: ";
        count++;
    }
    return count;
}

void Show_array(double arr[], int size)
{
    cout << "The array is: ";
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double arr[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        double temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}
