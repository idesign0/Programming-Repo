#include <stdio.h>
#include <stdlib.h>
#include "headerfile.h"
/* so lets make one custom header file
go to FILE > NEW > EMPTY FILE > save it with " .h " extension ex. "headerfile.h" in same place where you saved main.c file

now see my headerfile.h , and come back here.
////OTHERWISE YOU CAN JUST OPEN SCREENSHOT FILE
you see i added two constants there we are going to use them here in main. let us add our directive
*/
 /* here something to know , if you are adding file from default file location
                            you will place header file in brackets <stdio.h>
                            if you are adding files from same directory you will place headerfile in (" ")

*/
                                // so lets have some code

int main()
{
    int MyAge = (AGE/2) + 5; // I WILL talk about MATH OPERATORS in details letter ,
    printf("%s was %d  year old in 2013\n",MYNAME,MyAge);
    return 0;

    // so what going on here is  include "headerfile.h" copied header files details and put it on the place it is written
    // during the pre processing. , something we have done manually on last program.
}
