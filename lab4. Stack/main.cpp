#include <iostream>

using namespace std;

template<class T>
class Stack
{
private:
    T *stack;
    int size;
public:
    Stack() : stack(nullptr), size(0) { };
    Stack(T element) : stack(nullptr), size(0)
    {

        stack = new T[size+1];
        size++;
        stack[size-1] = element;
    } // конструктор, принимающий сразу элемент
    ~Stack() = default;

    void Push(T element)
    {
        T *tmp = stack;
        stack = new T[size + 1];
        size++;
        for (int i = 0; i < size - 1; i++)
            stack[i] = tmp[i];
        stack[size - 1] = element;
        if (size > 1)
            delete[] tmp;
    } // добавляет элемент в стек
    T Pop()
    {
        if (size == 0)
            return 0;
        size--;
        T retElement = stack[size];
        T *tmp = stack;
        stack = new T[size];
        for (int i = 0; i < size; i++)
            stack[i] = tmp[i];
        delete[] tmp;
        return retElement;
    } // достает элемент из стека
    void Print()
    {
        T *tmp = stack;
        if (size == 0)
        {
            cout << "Стек пуст!";
            return;
        }
        for (int i = size-1; i >= 0; i--)
            cout << "Элемент " << i << ": " << tmp[i] << endl;
    } // печатает содержимое стека
    T *Peek(T *mas)
    {
        mas = nullptr;
        mas = new T[size];
        T *tmp = stack;
        if (size == 0)
        {
            cout << "Стек пуст!";
            return nullptr;
        }
        for (int i = 0; i < size; i++)
        {
            mas[i] = tmp[i];
        }
        return mas;
    } // возращает массив со всеми элементами стека
    int GetSize()
    {
        return size;
    } // возвращает размер стека
    bool IsEmpty()
    {
        if (size == 0)
            return true;
        else
            return false;
    }
};
int main()
{

    Stack <int> stack;
    int element;

    while (1)
    {
        cout << "     1-Добавить элемент в стек" << endl;
        cout << "     2-Достать элемент из стека" << endl;
        cout << "     3-Размер стека" << endl;
        cout << "     4-Пустой ли стек?" << endl;
        cout << "     5-Просмотреть стек" << endl;
        cout << "     0-Окончить" << endl;

        int choose;
        cin >> choose;

        while (choose < 0 || choose > 5)
        {
            cout << "Ошибка. Введите еще раз: ";
            cin >> choose;
        }

        switch (choose)
        {
            case 1:
                cout << "Введите значение для добавления: " << endl;
                cin >> element;
                stack.Push(element);
                break;
            case 2:
                cout << "Значение из стека: " << stack.Pop() << endl;
                break;
            case 3:
                cout << "Размер стека: " << stack.GetSize() << endl;
                break;
            case 4:
                if (stack.IsEmpty())
                    cout << "Стек пуст!" << endl;
                else
                    cout << "Размер стека: " << stack.GetSize() << endl;
                break;
            case 5:
                stack.Print();
                break;
            case 0:
                return 0;
        }
    }
    //Stack <int> stack(5);
    //stack.Push(5);
    //stack.Push(2);
    //stack.Push(3);
    //stack.Print();
    //cout << sizeof(stack) << endl;
    //cout << stack.Pop() << endl;
    //stack.Print();
    //cout << sizeof(stack) << endl;
    //stack.Push(14);
    //cout << stack.Pop() << endl;

//    int *mas = stack.Peek(mas);
//    for (int i = 0; i < stack.GetSize(); i++)
//    {
//        cout << "Элемент " << i << ": " << *mas << endl;
//        mas++;
//    }
}