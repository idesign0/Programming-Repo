#include "dhruv.h"
#include <iostream>

using namespace std;

dhruv::dhruv(){

}

void dhruv::printing(){

    cout << "not constant !" << endl;

}

void dhruv::printing() const{

    cout << "constant !" << endl;

}
