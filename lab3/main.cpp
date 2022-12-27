#include <iostream>
#include <string>
#include "Man.h"
#include "Entepreneur.h"
#include "Tourist.h"
#include "Businessman.h"

using namespace std;

int main()
{
    while (1)
    {
        cout << "     1-Cоздать человека" << endl;
        cout << "     2-Создать предпринимателя" << endl;
        cout << "     3-Создать туриста" << endl;
        cout << "     4-Создать бизнесмена" << endl;
        cout << "     0-Окончить" << endl;
        fflush(stdin);
        int choose;
        cin >> choose;
        if (choose == 0)
            return 0;
        if (choose == 1)
        {
            Man man;
            while (1)
            {
                cout << "     1-Имя и фамилия человека" << endl;
                cout << "     2-Возраст человека" << endl;
                cout << "     3-Установить новый возраст" << endl;
                cout << "     0-Выйти в главное меню" << endl;
                cin >> choose;
                switch (choose)
                {
                    case 1:
                        cout << man.getName() << ' ' << man.getSurname() << endl; break;
                    case 2:
                        cout << "Возраст: " << man.getAge() << endl; break;
                    case 3:
                        man.setAge(); break;
                    case 0: break;
                }
            }
        }
        if (choose == 2)
        {
            Entepreneur entepreneur;
            while (1) {
                cout << "     1-Узнать имя и фамилия предпринимателя" << endl;
                cout << "     2-Узнать возраст предпринимателя" << endl;
                cout << "     3-Установить новый возраст" << endl;
                cout << "     4-Сфера деятельности" << endl;
                cout << "     5-Название компании" << endl;
                cout << "     6-Новая компания" << endl;
                cout << "     7-Новая сфера деятельности" << endl;
                cout << "     8-Добавить товар" << endl;
                cout << "     9-Список товаров" << endl;
                cout << "     0-Выйти в главное меню" << endl;
                cin >> choose;
                switch (choose)
                {
                    case 1:
                        cout << entepreneur.getName() << ' ' << entepreneur.getSurname() << endl; break;
                    case 2:
                        cout << "Возраст: " << entepreneur.getAge() << endl; break;
                    case 3:
                        entepreneur.setAge(); break;
                    case 4:
                        cout << "Сфера: " << entepreneur.getSphere() << endl; break;
                    case 5:
                        cout << "Компания: " << entepreneur.getCompanyName() << endl; break;
                    case 6:
                        entepreneur.setCompanyName(); break;
                    case 7:
                        entepreneur.setSphere(); break;
                    case 8:
                        entepreneur.AddGood(); break;
                    case 9:
                        entepreneur.GetAllGoods(); break;
                    case 0: break;
                }
            }
        }
        if (choose == 3)
        {
            Tourist tourist;
            while (1)
            {
                cout << "     1-Имя и фамилия туриста" << endl;
                cout << "     2-Возраст туриста" << endl;
                cout << "     3-Установить новый возраст" << endl;
                cout << "     4-Откуда турист" << endl;
                cout << "     5-Любимое место?" << endl;
                cout << "     6-Новое любимое место" << endl;
                cout << "     7-Все страны туриста" << endl;
                cout << "     8-Добавить страну" << endl;
                cout << "     0-Выйти в главное меню" << endl;
                cin >> choose;
                switch (choose)
                {
                    case 1:
                        cout << tourist.getName() << ' ' << tourist.getSurname() << endl; break;
                    case 2:
                        cout << "Возраст: " << tourist.getAge() << endl; break;
                    case 3:
                        tourist.setAge(); break;
                    case 4:
                        cout << tourist.getHomeCountry() << endl; break;
                    case 5:
                        cout << tourist.getFavPlace() << endl; break;
                    case 6:
                        tourist.setFavPlace(); break;
                    case 7:
                        tourist.GetAllCountries(); break;
                    case 8:
                        tourist.AddCountry(); break;
                    case 0: break;
                }
            }
        }
            if (choose == 4)
            {
                Businessman businessman;
                while (1)
                {
                    cout << "     1-Имя и фамилия бизнесмена" << endl;
                    cout << "     2-Возраст бизнесмена" << endl;
                    cout << "     3-Установить новый возраст" << endl;
                    cout << "     4-Откуда бизнесмена" << endl;
                    cout << "     5-Любимое место?" << endl;
                    cout << "     6-Сфера деятельности" << endl;
                    cout << "     7-Выручка" << endl;
                    cout << "     8-Новая выручка" << endl;
                    cout << "     9-Добавить товар" << endl;
                    cout << "     10-Все товары" << endl;
                    cout << "     11-Добавить страну" << endl;
                    cout << "     12-Все страны" << endl;
                    cout << "     0-Выйти в главное меню" << endl;
                    cin >> choose;
                    switch (choose)
                    {
                        case 1:
                            cout << businessman.getName() << ' ' << businessman.getSurname() << endl; break;
                        case 2:
                            cout << "Возраст: " << businessman.getAge() << endl; break;
                        case 3:
                            businessman.setAge(); break;
                        case 4:
                            cout << businessman.getHomeCountry() << endl; break;
                        case 5:
                            cout << businessman.getFavPlace() << endl; break;
                        case 6:
                            cout << "Сфера: " << businessman.getSphere() << endl; break;
                        case 7:
                            cout << "Выручка: " << businessman.getSalary() << endl; break;
                        case 8:
                            businessman.setSalary(); break;
                        case 9:
                            businessman.AddGood(); break;
                        case 10:
                            businessman.GetAllGoods(); break;
                        case 11:
                            businessman.AddCountry(); break;
                        case 12:
                            businessman.GetAllCountries(); break;
                        case 0:
                            break;
                    }
                }
            }
        }

}

