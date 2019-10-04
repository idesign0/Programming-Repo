#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int main()
{
    struct user bucky;
    struct user emily;

    bucky.userid =1;
    emily.userid =2;

     puts("Enter first name 1: ");
     gets(bucky.firstname);

     puts("Enter first name 2: ");
     gets(emily.firstname);

     printf(" Name of user 1 %s " , bucky.firstname);
     printf(" Name of user 2     %s " , emily.firstname);

    return 0;
}






