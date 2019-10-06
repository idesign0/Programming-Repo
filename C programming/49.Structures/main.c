#include <stdio.h>
#include <stdlib.h>
#include "header.h"

// structure is group of variables called members of the structures
/*
    Structures is very help full in saving large amount of data.

    example saving 500 people data like age, weight, Firstname, lastname, and IDs !

*/

int main()
{
    struct user dhruv;
    struct user kathan;

    dhruv.userid=1;
    kathan.userid=2;

    if(dhruv.userid==1){

    puts("Enter your first name of user 1: ");
    scanf(" %s",dhruv.firstname);


    printf("UserId %d name is %s \n\n",dhruv.userid,dhruv.firstname);
    }


    if(kathan.userid==2){

    puts("Enter your first name of user 2: ");
    scanf(" %s",kathan.firstname);


    printf("serId %d name is %s",kathan.userid,kathan.firstname);
    }




    return 0;


}
