#include "calculator.h"
 #include <iostream>

using namespace std;


increment::increment(int * a,int b,int c,char d){
   myFunction(a,b,c,d);
}
increment::myFunction(int * x,int y,int z,char w){

    int i;
    howmany = y;
    howmuch = z;

    switch(toupper(w)){
    case 'A':
        for(i=0;i<howmany;i++){
        *x +=howmuch ;
    }
    break;

    case 'S':
        for(i=0;i<howmany;i++){
        *x -=howmuch ;
    }
    break;

    case 'M':
        for(i=0;i<howmany;i++){
        *x *=howmuch ;
    }
    break;

    default : cout<< "Add valid math operation";
}

    value= *x;
}

increment::getvalue(){
    return value;
    }
