#include "dhruv.h"
#include <iostream>

using namespace std;

dhruv::dhruv(){
}

void dhruv::printing(){
    cout << "I'm normal object !\n";
}
void dhruv::cprinting() const{
    cout << "I'm constant object !";
}

