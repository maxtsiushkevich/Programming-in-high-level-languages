#include "Entepreneur.h"

Entepreneur :: Entepreneur() : Man()
{
    i = 1;
    cout << "Введите cферу деятельности: " << endl;
    cin >> sphere;
    cout << "Введите название компании: " << endl;
    cin >> companyName;

    cout << "Какой товар?" << endl;
    fflush(stdin);
    fgets(goods[0], 30, stdin);
    cout << "Сколько единиц?" << endl;
    cin >> count[0];
    while (count[0] < 1)
    {
        cout << "Введите еще раз, ошибка";
        cin >> count[0];
    }
}

Entepreneur :: ~Entepreneur() { }

char* Entepreneur :: getSphere() { return sphere; }
char* Entepreneur :: getCompanyName() { return companyName; }

void Entepreneur :: setSphere ()
{
    cout << "Введите новую cферу деятельности: " << endl;
    cin >> sphere;
}
void Entepreneur :: setCompanyName ()
{
    cout << "Введите новое название компании: " << endl;
    cin >> sphere;
}

void Entepreneur :: AddGood()
{
    if (i >= 10)
    {
        cout << "Закончились ячейки для записи" << endl;
        return;
    }
    cout << "Какой товар?" << endl;
    fflush(stdin);
    fgets(goods[i], 30, stdin);
    cout << "Сколько единиц?" << endl;
    cin >> count[i];
    while (count[i] < 1)
    {
        cout << "Введите еще раз, ошибка";
        cin >> count[i];
    }
    i++;
}

void Entepreneur :: GetAllGoods()
{
    for (int j = 0; j < i; j++)
    {
        cout << "Товар: " << goods[j] << "\tКоличество: " <<  count[j] << '\n' << endl;
        cout << '\r';
    }
}
