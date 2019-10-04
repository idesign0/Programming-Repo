#include <stdio.h>
#include <stdlib.h>
/*
    Relationship between array and pointers !

    I learned we can do amazing stuff with dereferencing the pointers , because array name itself is address of its first element !
    so simply (*arrayname = value of first element of it (index = 0))

    as we go forward
    (*(arrayname+1) = value of second element of it (index = 1))
    *(arrayname+2) = value of third element of it (index = 2)
    *(arrayname+3) = value of fourth element of it (index = 3)
*/
int main()
{
    int value[5] = {1,58,12,12,6};
    int i;

    for(i=0;i<5;i++){
        printf(" %d Value Address : %p\n",i+1,&value[i]);
    }

    printf("\n Address value = %p\n", value ); // is the address of first element


    // now cool way to dereference the array value
     printf("\n value of i = %d\n", *value ); // for first value

    // now let us print all the values
    /*To do that users just have to type (value + i))*/
    // *( value + 0) first index value
    // *( value + 1) two index value
    // *( value + 2) three index value
    // *( value + 3) four index value
    // *( value + 4) five index value

     for(i=0;i<5;i++){
        printf("\n value of %d = %d\n",i+1,*(value + i ));
    }


    return 0;


}
