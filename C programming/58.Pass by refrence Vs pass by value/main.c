#include <stdio.h>
#include <stdlib.h>

int passByvalue();
int passByaddress( int * i);

int main(){
    int tuna =50;
    passByvalue(tuna);
    printf("pass by value : %d \n",tuna);
    passByaddress(&tuna);
    printf("pass by value : %d \n",tuna);
}

int passByvalue(int i){

    i = 15;
    return;

}

int passByaddress(int * i){

    *i= 60;
    return;

}
