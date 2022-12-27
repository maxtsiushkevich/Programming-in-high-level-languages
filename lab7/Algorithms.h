#ifndef LAB4NORM_ALGORITHMS_H
#define LAB4NORM_ALGORITHMS_H
#include <iostream>
#include "Man.h"

using namespace std;

template<typename T>
void IteratorPrint(T begin, T end)
{
    if (begin == end)
    {
        cout << "Стек пуст!" << endl;
        return;
    }
    for (;;)
    {
        cout << (*begin) << ' ';
        if (begin == end)
        {
            cout << endl;
            break;
        }
        begin++;
    }
}

template <typename T>
void IteratorPrintMan(T begin, T end)
{
    if (begin == end)
    {
        cout << "Стек пуст!" << endl;
        return;
    }
    for (;;)
    {
        Man man = *begin;
        cout << man.GetName() << ' ' << man.GetSurname() << ' ' << man.GetAge() << endl;
        if (begin == end)
            break;
        begin++;
    }
}

template <typename T>
void PrintTop(T begin, T end)
{
    if (begin == end)
    {
        cout << "Стек пуст!" << endl;
        return;
    }
    cout << (*begin) << endl;
}

template<typename T, typename D>
void Search(T begin, T end, D data)
{
    if (begin == end)
    {
        cout << "Стек пуст!" << endl;
        return;
    }
    for (;;)
    {
        if (data == (*begin))
        {
            cout << "Найден соответствующий элемент" << endl;
            return;
        }
        if (begin == end)
            break;
        begin++;
    }
    cout << "Элемент не найден" << endl;
    return;
}

/*template<typename T>
auto IteratorPeek(T begin, T end)
{
    if (begin == end)
    {
        cout << "Стек пуст!" << endl;
        return
    }
    return (*begin);
}*/

#endif
