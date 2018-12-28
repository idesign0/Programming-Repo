#include <stdio.h>
#include <stdlib.h>
/*
    Here is second example ,
    guess computer want to know how many friends you have and want to print it out.

    problem is when , you have only one friend it will be " you've one friend ". it means it will be in singular form . ' friend '

    and in the case of more than one friend , it will be in plural. but how computer can identify it , yes thats why we use
    shorthand if statement


    lets take a look
*/
int main()
{
    int friend;

    printf("How many friends you have ?\n");
    scanf(" %d", &friend);

    printf("You have %d friend%s\n",friend,(friend>1) ? "s" : ""); // here we write condition for s behind the friend word.

    printf("How many friends you have ?\n");
    scanf(" %d", &friend);

    printf("You have %d friend%s\n",friend,(friend>1) ? "s" : ""); // here we write condition for s behind the friend word.
    return 0;
}
