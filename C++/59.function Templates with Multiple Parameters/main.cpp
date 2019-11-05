#include <iostream>

using namespace std;

template <class dhruv, class dhruv2>

dhruv smaller(dhruv a,dhruv2 b){
    return (a<b?a:b);
}

int main()
{
    double x=50.258; int y=51 ;

    cout << smaller(x,y) ;

}
