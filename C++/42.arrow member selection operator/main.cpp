#include <iostream>
#include "dhruv.h"
#include "dhruv.cpp"

#include "aclass.h"
#include "aclass.cpp"
using namespace std;

int main()
{
    dhruv odhruv;
    odhruv.printing();

    dhruv * pdhruv = &odhruv;

    pdhruv-> printing();

    // printing in same class

    aclass vc;

    vc.aclassp();


    // pointer between two classes

    aclass ac;

    dhruv *dh = &ac;

    dh->printing();


}
