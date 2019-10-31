#include "dhruv.h"
#include <iostream>

using namespace std;

dhruv::dhruv(int a,int b)
:val1(a),val2(b)
{
}

void dhruv::print(){
    cout << val1 << endl;
    cout << val2 << endl;
}
