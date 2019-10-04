#include <stdio.h>
#include <stdlib.h>

/* dereferencing is the way we can access the value of the variable through pointers
    In other words we can get the value though the memory address !

    to dereference type "*pinterVariable"
*/

int main()
{
    int i = 9;
    int * pi=&i ;

    printf("\n\n Address \t name \t value \t");
    printf("\n %p \t %s \t %d \t\n\n", &i ,"i",i); // address = %p ; string = %s  ; value = %d ;
    printf("\n %p \t %s \t %p \t\n\n", &pi ,"pi",pi); // address = %p ; string = %s  ; value = %d ;
    //getting value of the  i through the pointer variable pi
    printf("\n Value of i : %d \n\n", *pi);

    // WE can also assign different value through pointers

    *pi = 19 ;

    printf("\n Value of i : %d \n\n", i);



    return 0;


}
