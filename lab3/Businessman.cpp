#include "Businessman.h"
#include <string>
#include <iostream>

using namespace std;

Businessman :: Businessman()
{
    cout << "Какая выручка?" << endl;
    cin >> salary;
}

Businessman :: ~Businessman() { }

double Businessman :: getSalary() { return salary; }

void Businessman :: setSalary()
{
    cout << "Какая новая выручка: " << endl;
    cin >> salary;
    while (salary < 0)
    {
        cout << "Ошибка. Введите еще раз: ";
        cin >> salary;
    }
}