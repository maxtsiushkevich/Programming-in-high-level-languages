#ifndef LAB3_BUSINESSMAN_H
#define LAB3_BUSINESSMAN_H

#include <string>
#include "Tourist.h"
#include "Entepreneur.h"

using namespace std;

class Businessman : virtual public Tourist, virtual public Entepreneur
{
protected:
    double salary; // выручка
public:
    Businessman();
    ~Businessman();
    double getSalary();
    void setSalary();
};


#endif
