#ifndef LAB4NORM_MAN_H
#define LAB4NORM_MAN_H

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
    Man& operator=(Man man2)
    {
        strcpy(this->name, man2.name);
        strcpy(this->surname, man2.surname);
        this->age = man2.age;
        return *this;
    }
    Man();
    Man(char*, char*, int);
    virtual ~Man();
    void SetInfo();
    char* GetName();
    char* GetSurname();
    int GetAge();
    void SetAge();
};

Man :: Man ()
{
    age = 0;
}

Man :: Man (char* name, char* surname, int age)
{
    strcpy(this->name, name);
    strcpy(this->surname, surname);
    this->age = age;
}

Man :: ~Man() { }

void Man :: SetInfo()
{
    cout << "Введите имя" << endl;
    cin >> name;
    cout << "Введите фамилию" << endl;
    cin >> surname;
    cout << "Введите возраст" << endl;
    cin >> age;
    while (age < 14 || age > 120)
    {
        cout << "Ошибка. Введите еще раз: ";
        cin >> age;
    }
}
char* Man :: GetName() { return name; }
char* Man :: GetSurname() { return surname; }

int Man :: GetAge() { return age; }

void Man :: SetAge()
{
    cout << "Введите возраст: " << endl;
    cin >> age;
    while (age < 10)
    {
        cout << "Ошибка. Введите еще раз: ";
        cin >> age;
    }
}
#endif
