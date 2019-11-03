#include <iostream>
#include "dthis.h"
using namespace std;
#include "dthis.cpp"

int main()
{
   dhruv a(10);
   dhruv b(20);
   dhruv c;


    c=a*b;

    cout << c.num << endl;

    dhruv d;

    d = c * (b + a) ;

    cout << d.num << endl;

    dhruv e;

    e = c * (b + a) + d  ;

    cout << e.num << endl;

    return 0;
}
