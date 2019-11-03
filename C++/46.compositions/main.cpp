#include <iostream>
#include "birthday.h"

#include "people.h"

using namespace std;

int main()
{
    birthday bo(29,9,1998);

    people po("Dhruv Patel",bo);

    po.printpeople();

    return 0;
}
