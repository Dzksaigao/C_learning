#include <iostream>
#include"golf.h"
#include<cstring>

using namespace std;

void setgolf(golf &g, const char *name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g){
    cout << "Enter full name: ";
    cin.getline(g.fullname, Len);
    cout << "Enter handicap: ";
    cin >> g.handicap;
    cin.get();
    if(g.fullname[0] == '\0') return 0;
    else return 1;
}

void handicap(golf &g, int hc){
    g.handicap = hc;
}

void showgolf(const golf &g){
    cout << "Full name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}

