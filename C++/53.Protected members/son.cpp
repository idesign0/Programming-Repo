#include "son.h"
using namespace std;
#include <iostream>

son::son()
{
    publicv = 1 ;
    protectedv = 2 ;
}

void son::printing(){
    cout << publicv << endl;
    cout << protectedv << endl;
}


