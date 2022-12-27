#ifndef LAB4NORM_EXEPTION_H
#define LAB4NORM_EXEPTION_H
#include <iostream>

using namespace std;

class Exeption
{
protected:
    int code;
    char message[50];
public:
    Exeption()
    {
        code = 1;
        strcpy(message, "Global Exception");
    }

    Exeption(int code, char *message)
    {
        this->code = code;
        strcpy(this->message, message);
    }

    void show()
    {
        cout << message << ' ' << " Код: " << code << endl;
    }
};

class EmptyStackExp : public Exeption
{
public:
    EmptyStackExp(int code,char* message)
    {
        this->code = code;
        strcpy(this->message, message);
    }
};
#endif
