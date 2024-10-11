#include<iostream>

using namespace std;

void str(string * args1, int args2 = 0);

int main() {
    string str1;
    getline(cin, str1);
    str(&str1);
    return 0;
}

void str(string * args1, int args2){
    if(args2 != 0)
        cout << *args1 << endl;
}