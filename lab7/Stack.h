#ifndef LAB4NORM_STACK_H
#define LAB4NORM_STACK_H
#include "Exeption.h"

using namespace std;

template<class T>
class Stack
{
private:
    class Node
    {
    public:
        T data;
        Node* next;

        Node(T data = T(), Node* next = nullptr)
        {
            this->data = data;
            this->next = next;
        }
    };

    int size;
    Node *head;
public:
    Stack();
    ~Stack() = default;
    void Push(T);
    auto Pop();
    void Print();
    void PrintMan();
    auto Peek();
    int GetStackSize() { return size; }

    class Iterator
    {
    private:
        Node *current;
    public:
        Iterator() { }
        Iterator(Node *tmp)
        {
            this->current = tmp;
        }
        Iterator(const Iterator& it)
        {
            this->current = it.current;
        }
        void operator++(int value)
        {
            if (this->current == nullptr)
            {
                cout << "Стек пуст";
                return;
            }
            this->current = this->current->next;
        }
        T& operator*()
        {
            return this->current->data;
        }
        bool operator!=(Iterator b)
        {
            return !(b == *this);
        }
        bool operator==(Iterator b)
        {
            if (this->current == nullptr)
                return (this->current == b.current);
            return (this->current->next == b.current);
        }
    };
    Node*& Begin()
    {
        return this->head;
    }
    Node*& End()
    {
        if (size == 1 || size == 0)
            return this->head;
        Node* temp = this->head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        return temp->next;
    }
};

template<class T>
Stack<T> :: Stack()
{
    size = 0;
    head = nullptr;
}

template<class T>
void Stack<T> :: Push(T data)
{
    try
    {
        head = new Node(data, head); // создаем новый узел
    }
    catch (const std::bad_alloc&exp)
    {
        cout << "Ошибка выделения памяти: " << exp.what() << endl;
        return;
    }
    size++; // увеличиваем размер стека
}

template <typename T>
auto Stack<T>::Pop()
{
    try
    {
        if (head == nullptr)
            throw EmptyStackExp(1, (char*) "Стек пуст!");
    }
    catch (EmptyStackExp exp)
    {
        exp.show();
        return T();
    }
    Node* temp = head; // временный указатель на голову
    T tmp = temp->data; // возврацаемое значение
    head = head->next; // перевод указателя на следующий узел
    delete temp; // удаление предыдущего узда
    size--; // уменьшение размера
    return tmp; // возвращаем вынутое значение
}

template <typename T>
void Stack<T> :: Print()
{
    try
    {
        if (!size) // если стек пуст
            throw EmptyStackExp(1, (char*) "Стек пуст!");
    }
    catch (EmptyStackExp exp)
    {
        exp.show();
        return;
    }
    Node *tmp = head; // временный указатель на голову
    for (int i = 0; i < size; i++)
    {
        cout << tmp->data << ' '; // выводим значение узла
        tmp = tmp->next; // перемещаемся на следующий
    }
    cout << endl;
    return;
}

template <typename T>
void Stack<T> :: PrintMan()
{
    try
    {
        if (!size) // если стек пуст
            throw EmptyStackExp(1, (char*) "Стек пуст!");
    }
    catch (EmptyStackExp exp)
    {
        exp.show();
        return;
    }
    Node *tmp = head; // временный указатель на голову
    for (int i = 0; i < size; i++)
    {
        cout << tmp->data.GetName() << ' ' << tmp->data.GetSurname() << ' ' << tmp->data.GetAge() << endl;
        tmp = tmp->next; // перемещаемся на следующий
    }
    cout << endl;
    return;
}

template <typename T>
auto Stack<T> :: Peek()
{
    try
    {
        if (head == nullptr)
            throw EmptyStackExp(1, (char*) "Стек пуст!");
    }
    catch (EmptyStackExp exp)
    {
        exp.show();
        cout << "Размер стека: ";
        return T();
    }
    T tmp = head->data; // возвращаемое значение
    return tmp; // возвращаем вынутое значение
}


#endif
