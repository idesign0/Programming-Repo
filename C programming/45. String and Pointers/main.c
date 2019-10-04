#include <stdio.h>
#include <stdlib.h>
/*
    in array pointer relationship i learned array is special type of pointer which stores value of first element,
    i got to know then  array pointer is more that pointer variable which value cant be change !
*/
int main()
{
    char movie[20] = "shawshank redemption";
    // if i try to change this value by movie = "terminator" it wont change.
    /*But i can try another method*/

    char * pmovie =  "shawshank redemption";

    puts(pmovie);

    // above pmovie is not constant pointer ! we can change it

    pmovie = "terminator" ;
    puts(pmovie);

    /*
    Saving the string through memory address by giving each character of it memory address , pmovie can act as Pointer variable !

    Since puts waits for null character to stop the print , and when it comes to last memory block with null character it stops !

    other option is to access the individual character by loops or use strcpy ! but it is tedious , it can be change as variable.
    */


    return 0;
}
