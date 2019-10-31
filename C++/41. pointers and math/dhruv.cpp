#include "dhruv.h"
#include <iostream>

using namespace std;

int main(){

    int dull[5] ;

    int *pdull0 = &dull[0];
    int *pdull1 = &dull[1];
    int *pdull2 = &dull[2];
    int *pdull3 = &dull[3];
    int *pdull4 = &dull[4];

    cout << pdull0 << endl;
    cout << pdull1 << endl;
    cout << pdull2 << endl;
    cout << pdull3 << endl;
    cout << pdull4 << endl;



    pdull0 +=3 ;

    cout << pdull0 << endl;
}
