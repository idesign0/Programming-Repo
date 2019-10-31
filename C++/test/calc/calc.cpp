#include <iostream>
#include <ctype.h>
#include "calcu.h"
#include "calcu.cpp"


using namespace std;


int main()
{
    int a,b,c; // making initial variables
    char d;
    cout<< " Enter value for Increment : ";
    cin >> a;
    cout<< " Enter how many times for Increment : ";
    cin >>b;
    cout<< " Enter how much times you want to increment : ";
    cin >>c;
    cout<< " Enter how you want to increase(A/S/M/NA) : ";
    cin >>d;

    increment io(&a,b,c,d); // variables transfer value to class

    cout<<"\n incremented value : "<< io.getvalue() <<endl<<endl;

    return 0;
}

