#include <stdio.h>
#include <stdlib.h>

/*  pointers help to make very powerful Applications

    for now starts with basics

    What is Pointers !

    pointers are ' SPECIAL ' variables which stores the memory address of OTHER VARIABLES in computer !

*/

int main()
{
    int i = 9; //i is normal variable !

    /* BUT HOW WE CAN KNOW ITS MEMORY ADDRESS !

    "&i" is way to get its memory address !


    */

    printf("\n\n Address \t name \t value \t");
    printf("\n %p \t %s \t %d \t\n\n", &i ,"i",i); // address = %p ; string = %s  ; value = %d ;

    /*  Another way

        int * pi = &i ;
        '*' indicates variable is going to hold memory address
        pi is pointer variable of i ; it stores address of the i as value !
    */
    int * pi=&i ;

    printf("\n %p \t %s \t %d \t\n\n", pi ,"i",i); // address = %p ; string = %s  ; value = %d ;

    //now for getting memory address and value of pointer variable
    //&pi memory address of pinter itself !

    printf("\n %p \t %s \t %p \t\n\n", &pi ,"pi",pi); // address = %p ; string = %s  ; value = %d ;

    return 0;
}
