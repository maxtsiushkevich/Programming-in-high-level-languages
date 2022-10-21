#include <iostream>

using namespace std;

class String
{
friend bool operator== (String, String);
friend bool operator!= (String, String);

private:
    char *str;
    int size;

public:
    String();
    ~String();
    char* enter_str (); // ввод строки
    void print_str (); // вывод строки
    char* sum_str (char*); // сумма строк
    char *get_str();
    char *eq_str(char*); // приравнивание строк
    char* operator+ (String s2) { return this->sum_str(s2.get_str()); }
    char* operator= (String s2) { return this->eq_str(s2.get_str()); }
    char& operator[] (int);
    int operator+= (int siz) { return this->size += siz; }
    char* operator()(int, int);
    int get_size() { return size; }
};

bool operator== (String s1, String s2)
{
    int i=0;
    if (strlen(s1.str) != strlen(s2.str))
        return false;
    while (s1.str[i] != '\0')
   {
        if (s1.str[i] == s2.str[i])
        {
            i++;
            continue;
        }
        else
            return false;
    }
    return true;
}

bool operator!= (String s1, String s2)
{
    int i=0;
        if (strlen(s1.str) != strlen(s2.str))
            return false;
        while (s1.str[i] != '\0')
        {
            if (s1.str[i] != s2.str[i])
                return false;
            else
            {
                i++;
                continue;
            }
        }
        return true;
}

char&  String::operator[] (int ind)
{
    if (ind < 0 || ind >= strlen(str))
        cout << "Error" << endl;
    return str[ind];
}


String :: String() { str = new char[1]; }
String :: ~String() { }

char* String :: operator()(int ind1, int ind2)
{
    if (ind1<0 || ind2<0 || ind2>=strlen(str))
        cout << "Error" << endl;
    char *st = new char[(ind2-ind1)+2];
    int i=0;
    do
    {
        st[i] = str[ind1];
        ind1++;
        i++;
    } while (ind1<=ind2);
    return st;
}
char* String :: enter_str ()
{
    int i=0;
    while ((str[i++] = getchar()) != '\n')
    {
        str = (char*) realloc(str, i+1);
    }
    str[i-1] = '\0';
    size = strlen(str);
    return str;
}

void String :: print_str()
{
    cout << str;
    cout << ' ' << strlen(str) << endl;
}

char* String :: sum_str(char *t_str)
{
    int i = strlen(str);
    str[i++] = ' ';
    int j=0;
    do
    {
        str = (char*) realloc(str, i+1);
        str[i++] = t_str[j];
        j++;
    } while (t_str[j] != '\0');
    str[i] = '\0';
    this->size++;
    return str;
}

char* String :: get_str() { return str; }

char* String :: eq_str(char *t_str)
{
    str = (char*) realloc(str, strlen(t_str)+1 );
    int i;
    for (i=0; i<strlen(t_str); i++)
    {
        str[i] = t_str[i];
    }
    str[i] = '\0';
    return str;
}

int main()
{
    String str1, str2;

    cout << "Введите строки для сложения" << endl;
    str1.enter_str();
    str2.enter_str();
    str1 + str2; // оператор +
    str1.print_str();
    str1 += str2.get_size();
    cout << str1.get_size() << endl;

    cout << "Введите строки для приравнивания" << endl;
    str1.enter_str();
    str2.enter_str();
    str1 = str2; // оператор =
    str1.print_str();

    cout << "Введите строки для определения равенства" << endl;
    str1.enter_str();
    str2.enter_str();
    if (str1 == str2) // оператор ==
        cout << "Равны" << endl;
    else
        cout << "Не равны" << endl;

    cout << "Введите строки для определения неравества" << endl;
    str1.enter_str();
    str2.enter_str();
    if (str1 != str2) // оператор !=
        cout << "Не равны" << endl;
    else
        cout << "Равны" << endl;


    cout << "Введите строку" << endl;
    str1.enter_str();
    int n;
    cout << "Введите индекс символа" << endl;
    cin >> n;
    cout << str1[n] << endl;

    //cout << "Введите строку" << endl;
    char *exp = str1(1, 5); // оператор ()(int, int)
    cout << exp << endl;
    return 0;
}



