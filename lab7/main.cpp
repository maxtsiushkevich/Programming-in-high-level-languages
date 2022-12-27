#include <iostream>
#include "Man.h"
#include <fstream>
#include "Stack.h"
#include "Algorithms.h"
using namespace std;

int main()
{
    Stack<Man> Manstack;
    Manstack.Push(*new Man("ilon", "mask", 50));
    Manstack.Push(*new Man("mas", "gg", 17));
    Manstack.Push(*new Man("lexa", "msk", 32));
    Stack<Man> :: Iterator am = Manstack.Begin(), bm = Manstack.End(); // установка итераторов
    IteratorPrintMan(am, bm); // печатает людей

    Stack<int> stack;
    Stack<int> :: Iterator a = stack.Begin(), b = stack.End();
    Search(a, b, 11); // выведет что стек пуст
    stack.Push(11);
    stack.Push(145);
    stack.Push(93);
    a = stack.Begin(), b = stack.End(); // установка итераторов на начало и конец
    PrintTop(a, b); // выводит верхний элемет
    IteratorPrint(a, b); // выводит содержимое стека
    Search(a, b, 11); // поиск элемента в стеке

}
