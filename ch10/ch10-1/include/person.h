#include <string>

#ifndef PERSON_H
#define PERSON_H

class Person {
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person(){ lname = ""; fname[0] = '\0'; }; // #1
    Person(const std::string& ln, const char* fn = "Heyyou"); // #2
    // metohds
    void show() const; // firstname lastname
    void FormalShow() const; // lastname, firstname
};
#endif // PERSON_H