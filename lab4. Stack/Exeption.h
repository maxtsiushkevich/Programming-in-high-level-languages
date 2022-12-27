#ifndef LAB4G_EXEPTION_H
#define LAB4G_EXEPTION_H
#include <iostream>


using namespace std;

class Excep{
private:
    int codenumber;
    string name;
public:
    Excep();
    Excep(int numb, string name){
        this->name = name;
        codenumber = numb;
    }
    ~Excep(){
    }
    void show(){
        cout<<name<<"\tКод ошибки\t"<<codenumber<<endl;
    }
};


class Bad_alloc : public Excep{
private:
    int numb;
    string name;
public:
    Bad_alloc(){}
    Bad_alloc(int numb, string name) : Excep( numb, name){

    }
    ~Bad_alloc(){}
    void show(){
        cout<<"Проблема с выделением памяти\t"<<"Ошибка\t"<<name<<"\t"<<numb;
    }
};


class Invailid_argument : public Excep{
private:
    int numb;
    string name;
    int index;
public:
    Invailid_argument(){}
    Invailid_argument(int numb, string name) : Excep(numb, name){
    }
    Invailid_argument(int numb, string name, int index) : Excep(numb, name){
        this->index = index;
    }
    ~Invailid_argument(){}
    void show() {
        cout << "Недопустимое значение\tОшибка\t" << numb << endl << name << endl;
    }
    void show_index(){
        cout<<index<<endl;
    }
};

class Overflow_error : public Excep{
private:
    int numb;
    string name;
    int index;
public:
    Overflow_error(){}
    Overflow_error(int numb, string name) : Excep(numb, name){

    }
    Overflow_error(int numb, string name, int index):Excep(numb, name){
        this->index = index;
    }
    ~Overflow_error(){}
    void show(){
        cout<<"Переполнение\t, ошибка\t"<<numb<<"\t"<<name<<endl;
    }
    void show_index(){
        cout<<index<<endl;
    }
};

#endif
