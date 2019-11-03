#include <iostream>
using namespace std;

#include "birthday.h"
#include "people.h"

people::people(string x,birthday bo)
: name(x),birtho(bo)
{

}

void people::printpeople(){
    cout << "My name is " << name << " and my birthday is ";
    birtho.printbday();
}
