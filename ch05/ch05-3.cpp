#include <iostream>

using namespace std;

int main() {
    int num,sum = 0;
    while(cin>>num && num!= 0){
        sum += num;
        cout << "The sum is " << sum << endl;
    }
    return 0;
}