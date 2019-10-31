#include <iostream>
#include "dhruv.h"
#include "dhruv.cpp"

using namespace std;

int volume(int x = 1, int y = 1, int z = 1);

int main(){

    cout << volume();

    return 0;
}

int volume(int x, int y, int z){
    return x*y*z;
}
