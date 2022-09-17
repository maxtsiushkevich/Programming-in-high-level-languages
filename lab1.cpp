#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;
    public:
    Rectangle();
    ~Rectangle() { cout << "Объект удален" << endl; }
    void set_length ();
    void set_width ();
    int  get_length () { return length; }
    int get_width() { return width; }
    int area ();
    int perimeter ();
    void show_sq () { cout << "Площадь " << area() << endl; }
    void show_per () { cout << "Периметр " << perimeter() << endl; }
    void show_length () { cout << "Длина " << get_length() << endl; }
    void show_width () { cout << "Ширина " << get_width() << endl; }
};

Rectangle :: Rectangle()
{
    length = 1;
    width = 1;
    cout << "Значения по умолчанию 1" << endl;
}

void Rectangle :: set_length ()
{
    int len;
    cin >> len;
    while (len <= 0)
    {
        cout << "Введите еще раз: ";
        cin >> len;
    }
    length = len;
}

void Rectangle :: set_width ()
{
    int wid;
    cin >> wid;
    while (wid <= 0)
    {
        cout << "Введите еще раз: ";
        cin >> wid;
    }
    width = wid;
}

int Rectangle :: area ()
{
    int area = length * width;
    return area;
}

int Rectangle :: perimeter ()
{
    int perimeter = 2 * width + 2 * length;
    return perimeter;
}

int main()
{
    system("clear");
    Rectangle obj;
    while (1)
    {
        cout << "     1-Ввести длину и ширину" << endl;;
        cout << "     2-Вывести все данные" << endl;;
        cout << "     0-Окончить" << endl;;
        fflush(stdin);
        char choose;
        choose = getchar();
        if (choose == '1')
        {
            system("clear");
            cout << "Введите длину" << endl;;
            obj.set_length();
            cout << "Введите ширину" << endl;;
            obj.set_width();
            cout << "Для выхода в главное меню нажмите Enter" << endl;;
            getchar();
            getchar();
        }
        if (choose == '2')
        {
            system("clear");
            obj.show_length();
            obj.show_width();
            obj.show_sq();
            obj.show_per();
            cout << "Для выхода в главное меню нажмите Enter" << endl;;
            getchar();
            getchar();
        }
        if (choose == '0')
            return 0;
        system("clear");
    }
}
