#include <iostream>
#include <cstring>

using namespace std;

struct chaff {
    char dross[20];
    int slag;
};

chaff buffer1[10];

int main() {
    chaff* c = new(buffer1) chaff[2];
    strcpy(c[0].dross, "hello");
    c[0].slag = 10;
    c[1].dross[0] = 'a';
    c[1].slag = 20;
    cout << c[0].dross << " " << c[0].slag << endl;
    cout << c[1].dross << " " << c[1].slag << endl;
    chaff* c1 = new chaff[2];
    strcpy(c1[0].dross, "world");
    c1[0].slag = 30;
    c1[1].dross[0] = 'b';
    c1[1].slag = 40;
    cout << c1[0].dross << " " << c1[0].slag << endl;
    cout << c1[1].dross << " " << c1[1].slag << endl;
    delete[] c1;
    return 0;
}
