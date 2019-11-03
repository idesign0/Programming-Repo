#include "birthday.h"
#include <iostream>
using namespace std;

birthday::birthday(int d,int m,int y)
{
    day = d;
    month = m;
    year = y;
}

void birthday::printbday(){
    cout << day << "/" << month << "/" << year ;
}
