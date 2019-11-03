#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>
#include "birthday.h"
using namespace std;


class people
{
    public:
        people( string x,birthday bo);
        void printpeople();

    private:
        string name;
        birthday birtho;
};

#endif // PEOPLE_H
