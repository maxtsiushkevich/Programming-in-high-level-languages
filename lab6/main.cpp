#include <iostream>
#include "Man.h"
#include <fstream>
#include "Stack.h"
using namespace std;

int main()
{
    Stack<Man> stack;
    Man man;
    ofstream ofile;
    ifstream ifile;
    while (1)
    {
        cout << "1 - Создать человека и добавить его в стек\n"
                "2 - Записать стек в текстовый файл\n"
                "3 - Записать стек в бинарный файл\n"
                "4 - Считать из бинарного файла в стек\n"
                "5 - Считать из текстового файла в стек\n"
                "6 - Просмотреть стек\n"
                "0 - Завершить программу" << endl;
        int choice;
        cin >> choice;
        while (choice < 0 || choice > 6)
        {
            cout << "Ошибка! Введите еще раз" << endl;
            cin >> choice;
        }
        switch (choice)
        {
            case 0: return 0;
            case 1:
                man.SetInfo();
                stack.Push(man);
                break;
            case 2:
                ofile.open("file.txt", ios::out);
                if (!ofile.is_open())
                    cout << "Ошибка открытия файла";
                while(1)
                {
                    man = stack.Pop();
                    if (man.GetAge() == 0)
                        break;
                    ofile << '\n' << man.GetName() << ' ' << man.GetSurname() << ' ' << man.GetAge();
                }
                ofile.close();
                break;
            case 3:
                ofile.open("file.bin", ios::out | ios::binary);
                if (!ofile.is_open())
                    cout << "Ошибка открытия файла";
                while (1)
                {
                    man = stack.Pop();
                    if (man.GetAge() == 0)
                        break;
                    ofile.write((char*)&man, sizeof(Man));
                }
                ofile.close();
                break;
            case 4:
                ifile.open("file.bin", ios::in | ios::binary);
                if (!ifile.is_open())
                    cout << "Ошибка открытия файла" << endl;
                while (ifile.read((char*)&man, sizeof(Man)))
                    stack.Push(man);
                ofile.close();
                break;
            case 5:
                ifile.open("file.txt", ios::in);
                if (!ifile.is_open())
                    cout << "Ошибка открытия файла";
                while(!ifile.eof())
                {
                    char name[30];
                    char surname[30];
                    int age;
                    ifile >> name >> surname >> age; // считывание
                    Man tmp(name, surname, age);
                    stack.Push(tmp);
                }
                ifile.close();
                break;
            case 6:
                stack.PrintMan();
        }
    }
}


/*int main()
{

    while (1) {
        int choice;
        cout << "Выберите тип данных" << endl;
        cout << "1 - char" << endl;
        cout << "2 - int" << endl;
        cout << "3 - float" << endl;
        try
        {
            cin >> choice;
            if (choice > 3 || choice < 1)
                throw Exeption(2,(char*) "Выбран неверный пункт");
        }
        catch (Exeption exp)
        {
            exp.show();
            continue;
        }
        Stack<char> CharStack;
        Stack<int> IntStack;
        Stack<float> FloatStack;
        while (1) {
            int choose;
            cout << "1 - Добавить элемент (push) " << endl;
            cout << "2 - Достать элемент (pop) " << endl;
            cout << "3 - Получить содержимое стека (peek) " << endl;
            cout << "4 - Вывести на экран содержимое стека (print) " << endl;
            cout << "5 - Размер стека " << endl;
            cout << "6 - Поменять тип данных " << endl;
            try
            {
                cin >> choose;
                if (choose > 6 || choose < 1)
                    throw Exeption(2,(char*) "Выбран неверный пункт");
            }
            catch (Exeption exp)
            {
                exp.show();
                continue;
            }
            if (choice == 1)
            {
                if (choose == 1)
                {
                    fflush(stdin);
                    char a = getchar();
                    CharStack.Push(a);
                }
                if (choose == 2)
                    cout << CharStack.Pop() << endl;
                if (choose == 3)
                {
                    char mas = CharStack.Peek();
                    cout << mas << endl;
                }
                if (choose == 4)
                    CharStack.Print();
                if (choose == 5)
                    cout << CharStack.GetStackSize() << endl;
                if (choose == 6)
                    break;
                cout << endl;
            }

            if (choice == 2)
            {
                if (choose == 1)
                {
                    int a;
                    cin >> a;
                    IntStack.Push(a);
                }
                if (choose == 2)
                    cout << IntStack.Pop() << endl;
                if (choose == 3)
                {
                    int mas = IntStack.Peek();
                    cout << mas << endl;
                }
                if (choose == 4)
                    IntStack.Print();
                if (choose == 5)
                    cout << IntStack.GetStackSize() << endl;
                if (choose == 6)
                    break;
                cout << endl;
            }

            if (choice == 3)
            {
                if (choose == 1)
                {
                    float a;
                    cin >> a;
                    FloatStack.Push(a);
                }
                if (choose == 2)
                    cout << FloatStack.Pop() << endl;
                if (choose == 3)
                {
                    float mas = FloatStack.Peek();
                    cout << mas << endl;
                }
                if (choose == 4)
                    FloatStack.Print();
                if (choose == 5)
                    cout << FloatStack.GetStackSize() << endl;
                if (choose == 6)
                    break;
                cout << endl;
            }
        }
    }

} */
