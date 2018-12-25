#include <stdio.h>
#include <stdlib.h>


/*From Now we are going to make program more interactive

    and we let computer decide whether execute output or not.

    in this module we are going to use if statement.

    in "if" statement if condition given in parenthesis  is satisfies , output will execute

*/



int main()
{
    if(3<5);
    printf("CORRECT , 3 is less than 5\n");

    if(5==5); // we put here double " equal to " sign

    //because in programming we use " = " for assigning values to variables.
    // And " == " for only comparison of values


    printf("CORRECT\n");

    if(3!=5); // != used for "not equal to"
    printf("CORRECT , 3 is not equal to 5\n");

    //lets try one logic

    int age;

    printf("what's your age ?\n");
    scanf("%d",&age);

    if(age>=18);
    printf("you are allowed in Club\n");

    return 0;
}
