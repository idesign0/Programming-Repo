
#include "dthis.h"
#include <iostream>


using namespace std;

dhruv::dhruv()
{

}
dhruv::dhruv(int a)
{
    num = a;
}
dhruv dhruv::operator*(dhruv dod){

    dhruv bnd;

    bnd.num = num * dod.num;

    return(bnd);


}
dhruv dhruv::operator+(dhruv dod){

    dhruv bnd;

    bnd.num = num + dod.num;

    return(bnd);


}
dhruv dhruv::operator-(dhruv dod){

    dhruv bnd;

    bnd.num = num - dod.num;

    return(bnd);


}
dhruv dhruv::operator/(dhruv dod){

    dhruv bnd;

    bnd.num = num / dod.num;

    return(bnd);


}

