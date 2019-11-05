#include <iostream>

using namespace std;

template <class dhr>

class dhruv{
        dhr smaller , bigger ;

    public :
        dhruv(dhr x, dhr y){

        bigger = x;
        smaller= y;

        }

        dhr big();

};

template <class dhr>

    dhr dhruv<dhr>::big(){

    return (bigger>smaller? bigger : smaller) ;

}


int main()
{
    int x=500 , y=51 ;
    dhruv<int> dod(x,y);
    cout << dod.big() ;

}
