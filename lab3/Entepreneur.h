#ifndef LAB3_ENTEPRENEUR_H
#define LAB3_ENTEPRENEUR_H
#include <string>
#include "Man.h"

using namespace std;


class Entepreneur : virtual public Man
{
protected:
    int i;
    char sphere[30];
    char companyName[30];
    char goods[10][30]; //10 товаров
    int count[10];
public:
    Entepreneur();
    virtual ~Entepreneur();

    void AddGood();
    void GetAllGoods();

    char* getSphere();
    char* getCompanyName();

    void setSphere ();
    void setCompanyName ();
};



#endif
