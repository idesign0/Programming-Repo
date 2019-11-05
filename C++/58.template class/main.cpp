#include <iostream>

using namespace std;

template <class dhruv>

dhruv addition(dhruv a,dhruv b){
    return a + b;
}

int main()
{
    double x=50.258,y=51.255,z;

    z = addition(x,y);

    cout << z ;

}
