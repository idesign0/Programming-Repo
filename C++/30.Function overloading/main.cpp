#include <iostream>
#include "dhruv.h"
#include "dhruv.cpp"

using namespace std;

void printing(int x){
    cout << "\n\n" << x ;
}

void printing(float x){
    cout << "\n\n" << x ;
}

int main(){

    float x;

    cin >> x;

    printing(x);

    return 0;
}
