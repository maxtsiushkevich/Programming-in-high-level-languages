#ifndef LAB3_TOURIST_H
#define LAB3_TOURIST_H
#include <string>
#include "Man.h"

using namespace std;


class Tourist : virtual public Man
{
protected:
    int i;
    char homeCountry[30];
    char favPlace[30];

    char country[10][30]; //10 стран
    struct Date
    {
        int day;
        int month;
        int year;
    } date[10];

public:
    Tourist();
    virtual ~Tourist();

    char* getHomeCountry();

    void AddCountry();
    void GetAllCountries();

    char* getFavPlace();

    void setFavPlace();
};


#endif //LAB3_TOURIST_H
