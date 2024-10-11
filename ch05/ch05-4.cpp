#include <iostream>

using namespace std;

int main() {
    int invest1=100, invest2=100,count=0;
    while(invest2<=invest1)
    {
        invest2*=1.05;
        invest1+=10;
        count++;
    }
    cout<<"Number of years: "<<count<<endl;
    return 0;
}