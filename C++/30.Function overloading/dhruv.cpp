#include "dhruv.h"
#include <iostream>

using namespace std;

void printing(int x){
    cout <<" printing the integer "<< x ;
}

void printing(float x){
    cout << "printing the floating number "<< x ;
}

int main(){

    int a = 24;
    float b = 24.515;
    printing(a);
    printing(b);

}
