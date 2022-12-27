#ifndef LAB3_MAN_H
#define LAB3_MAN_H
#include <iostream>
#include <string>

using namespace std;

class Man
{
protected:
    char name[30];
    char surname[30];
    int age;
public:
    Man();
    virtual ~Man();
    char* getName();
    char* getSurname();
    int getAge();
    void setAge();
};

#endif
