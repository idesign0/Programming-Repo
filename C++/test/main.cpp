#include <iostream>
#include <ctype.h>
using namespace std;


class increment{
public:
    increment(int * a,int b,int c,char d){
    myFunction(a,b,c,d);
    }
    void myFunction(int * x,int y,int z,char w){

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

    int getvalue(){
    return value;
    }

private:

    int howmany;
    int howmuch;
    int value;

};
int main()
{
    int a,b,c; // making initial variables
    char d;
    cout<< " Enter value for Increment : ";
    cin >> a;
    cout<< " Enter how many times for Increment : ";
    cin >>b;
    cout<< " Enter how much times you want to increment : ";
    cin >>c;
    cout<< " Enter how you want to increase(A/S/M/NA) : ";
    cin >>d;

    increment io(&a,b,c,d); // variables transfer value to class

    cout<<"\n incremented value : "<< io.getvalue() <<endl<<endl;

    return 0;
}

