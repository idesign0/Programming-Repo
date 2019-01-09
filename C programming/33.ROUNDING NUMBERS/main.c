#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//we will use math.h to call some math functions from c library

// in this module we will add floor function and ceil function for rounding

// floor is used to rounding down numbers

// ceil is used to rounding up the numbers

int main()
{
    float a = 9.8132;
    float b = 6.4;

    printf("round down number %.2f \n",floor(a)); // ans . 9

    printf("round down number %.2f \n",floor(b)); // ans . 6

    printf("round down number %.2f \n",ceil(a)); // ans . 10

    printf("round down number %.2f \n",ceil(b)); // ans . 7



    return 0;
}
