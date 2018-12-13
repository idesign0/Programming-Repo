#include <stdio.h>
#include <stdlib.h>
//bunch of characters within "" are call strings
int main()
{
    printf("%s IS BEST PERSON IN WORLD\n","BUCKY"); // %s is converging character , second string substitutes for %s
    printf("%s IS BEST %s IN WORLD\n","BUCKY","PROGRAMMER"); // YOU CAN USE CONVERGING CHARACTERS MULTIPLE TIMES.
    // THIS %s is only for stings
    printf("Dhruv ate %d slices of pizza",3);
    // %d is used for numbers
    // numbers go in between quotation
    printf("pi is %f\n",3.1415926535);
    //numbers with decimal places we use %f(stands for float)
    printf("pi is %.2f\n",3.1415926535);
    // for only show  2 decimal places
    printf("pi is %.4f\n",3.1415926535);
    // for only show  4 decimal places
    return 0;
}
