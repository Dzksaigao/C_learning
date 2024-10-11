#include <iostream>

using namespace std;
#include<cstring>
struct stringy{
    char * str;
    int ct;
};

void set(stringy &s, char * str);
void show(stringy s, int ct = 1);
void show(char * str, int ct = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    delete[] beany.str;
    show( "Done!");

    return 0;
}

void set(stringy &s, char * str)
{
    s.str = new char[strlen(str) + 1];
    strcpy(s.str, str);
    s.ct = strlen(str);
}

void show(stringy s, int ct)
{
    for (int i = 0; i < ct; i++)
    {
        cout << s.str << endl;
    }
}

void show(char * str, int ct)
{
    for (int i = 0; i < ct; i++)
    {
        cout << str << endl;
    }
}
