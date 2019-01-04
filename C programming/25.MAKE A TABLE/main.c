#include <stdio.h>
#include <stdlib.h>


/*
 today we are going to learn about one little application of for loop
 it is very small application , but good visual practice ,

        we are going to make little table using for loop ;

*/
int main()
{
    int row; // i declared one variable for row ;
    int column; // for column

    for(row=1;row<=5;row++) // i want to have table of five rows , giving it name (for loop 1)
        {
            for(column=1;column<=10;column++) // this technique is called nesting of for loop (for loop 2)

                // here first printing (1) statement , printf (2) will execute
            {
             printf("%d ",column); // (2)
            }
            printf("\n"); // (1) then print (1) executes for new line and code will for raw (2);

            // remember fist column print will execute and then raw statement executes
        }
    return 0;
}
