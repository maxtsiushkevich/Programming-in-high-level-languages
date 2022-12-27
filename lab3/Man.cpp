#include "Man.h"
#include <string>

using namespace std;

Man :: Man ()
{
    cout << "Введите имя" << endl;
    cin >> name;
    cout << "Введите фамилию" << endl;
    cin >> surname;
    cout << "Введите возраст" << endl;
    cin >> age;
    while (age < 18 || age > 120)
    {
        cout << "Ошибка. Введите еще раз: ";
        cin >> age;
    }
}
Man :: ~Man() { }

char* Man :: getName() { return name; }
char* Man :: getSurname() { return surname; }

int Man :: getAge() { return age; }

void Man :: setAge()
{
    cout << "Введите возраст: " << endl;
    cin >> age;
    while (age < 10)
    {
        cout << "Ошибка. Введите еще раз: ";
        cin >> age;
    }
}