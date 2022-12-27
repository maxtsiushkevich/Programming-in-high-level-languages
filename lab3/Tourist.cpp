#include "Tourist.h"
#include <string>
#include <iostream>

using namespace std;

Tourist :: Tourist()
{
    i = 1;
    cout << "Из какой страны человек?" << endl;
    cin >> homeCountry;

    cout << "В какой стране человек?" << endl;
    fflush(stdin);
    fgets(country[0], 30, stdin);
    cout << "Дата въезда (число, месяц, год через пробел)?" << endl;
    cin >> date[0].day >> date[0].month >> date[0].year;
    while ((date[0].day > 31 || date[0].day < 1) || (date[0].month > 12 || date[0].month < 1) || (date[0].year > 2022 || date[0].year < 200))
    {
        cout << "Введите еще раз, ошибка";
        cin >> date[0].day >> date[0].month >> date[0].year;
    }
    cout << "Любимое место?" << endl;
    //cin >> favPlace;
    fflush (stdin);
    fgets(favPlace, 30, stdin);

}

Tourist :: ~Tourist() { }

char* Tourist :: getHomeCountry() { return homeCountry; }

char* Tourist :: getFavPlace() { return favPlace; }

void Tourist :: AddCountry()
{
    if (i >= 10)
    {
        cout << "Закончились ячейки для записи" << endl;
        return;
    }
    cout << "Введите страну: " << endl;
    fflush(stdin);
    fgets(country[i], 30, stdin);
    cout << "Дата въезда (число, месяц, год через пробел)?" << endl;
    cin >> date[i].day >> date[i].month >> date[i].year;
    while ((date[i].day > 31 || date[i].day < 1) || (date[i].month > 12 || date[i].month < 1) || (date[i].year > 2022 || date[i].year < 200))
    {
        cout << "Введите еще раз, ошибка" << endl;
        cin >> date[i].day >> date[i].month >> date[i].year;
    }
    i++;
}

void Tourist :: GetAllCountries()
{
    for (int j = 0; j < i; j++)
    {
        cout << "Страна: " << country[j] << "\tДата въезда: " << date[j].day << '.' << date[j].month << '.' << date[j].year << endl;
        cout << '\r';
    }
}

void Tourist :: setFavPlace()
{
    cout << "Введите новое место: " << endl;
    cin >> favPlace;
}