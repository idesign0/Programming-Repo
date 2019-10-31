#include <iostream>
#include "dhruv.h"
#include "dhruv.cpp"

using namespace std;

int main()
{
    dhruv odhruv;
    odhruv.printing();

    dhruv * pdhruv = &odhruv;

    pdhruv-> printing();
}
