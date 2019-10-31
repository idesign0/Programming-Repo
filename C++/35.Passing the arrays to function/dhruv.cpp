#include "dhruv.h"
#include <iostream>

using namespace std;

void printing(int thearray[],int howmany);

int main(){

    int dhruv[5] = {54,5,4,54,56};

    printing(dhruv,5);

}

void printing(int thearray[],int howmany){
    for(int x;x<howmany;x++){
        cout << thearray[x];
    }
    }
