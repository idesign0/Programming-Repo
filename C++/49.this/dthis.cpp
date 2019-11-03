#include "dthis.h"
#include <iostream>


using namespace std;

dthis::dthis(int num):h(num)
{

}

void dthis::printing(){

cout << "Print h " << h << endl; // assuming
cout << "This->h " << this->h << endl; // telling
cout << "*(This).h " << (*this).h << endl; // memory location


}

