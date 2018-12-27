#include <stdio.h>
#include <stdlib.h>


//what if we need two conditions to be satisfied.
// And output should be seen if and only two conditions are satisfies


//imagine one phenomena for understanding.


////  WE ARE TAKING SAME EXAMPLE OF PREVIOUS MODULE , WE WILL KNOW USE OF 'OR' OPERATOR.
//// But in or operator only one statement need to be true , but both statements are false , else print will show up

/*
 we want to buy one cell-phone.
 our requirements are , 4 gb ram . 32 gb storage space.
 now we will write one logic such that output will be seen IF ATLEAST ONE requirement is fulfilled.
*/



int main()
{
    int ram;
    int storage;

    printf("Enter RAM \n");
    scanf(" %d",&ram);

    printf("Enter Storage \n");
    scanf(" %d",&storage);

    printf("You choose phone with %d RAM and %d Storage\n",ram,storage);

    if((storage>=32) || (ram>=8)) // its " OR " operator , if ONLY ONE conditions are satisfies , then output 1 print.
        {
        printf("It's a good Choice");//output 1
    }else{
        printf("Not a good choice");// if conditions not satisfied , this else statement will printout
    }

    // see in output screenshot , only one condition is satisfied though output (1) is printed out
}
