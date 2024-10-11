
#include <iostream>
#include "person.h"
#include <cstring>

Person::Person(const std::string& ln, const char* fn){
    lname = ln;
    strcpy(fname, fn);
}

void Person::show() const{
    std::cout << "Name: " << fname << " " << lname << std::endl;
}

void Person::FormalShow() const{
    std::cout << "Name: " << lname << " " << fname << std::endl;
}