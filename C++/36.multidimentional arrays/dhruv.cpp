#include "dhruv.h"
#include <iostream>

using namespace std;

int main(){

    int dhruv[3][5] = {{504,53,47,549,565},{54,50,46,534,506},{524,52,4,64,5}};

    for(int row=0;row<3;row++){

        for( int column =0;column<5;column++){
            cout << dhruv[row][column] << " " ;
        }
        cout << endl;
    }

}
