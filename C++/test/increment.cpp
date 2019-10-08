#include <iostream>

using namespace std;

int myFunction(int * x);

    int howmany;
    int howmuch;

int main()
{
    int y;
    cout<< " Enter value for Increment : ";
    cin >> y;
    cout<< "\n How many times you want to increment : ";
    cin >> howmany;
    cout<< "\n How much you want to increment each time : ";
    cin >> howmuch;

    myFunction(&y);
    cout<<"\n incremented value : "<< y <<endl<<endl;

    return 0;
}

int myFunction(int * x){
     int i;

    for(i=0;i<howmany;i++){
        *x +=howmuch ;
    }
    return *x;
}
