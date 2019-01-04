#include <stdio.h>
#include <stdlib.h>

// switch

// suppose we have bunch of conditions , and we want to test then out ,
/*
    but using the if else , nested if , if else if can be very handy and difficult to code ,

    for simplicity we can use switch statement ,it is very simple to use .
        let's see its syntax ;

        switch(variable)
        {
        case ' value ' (for testing) : printf(""); //for example , main advantage is you can add multiple statement in switch cases,
                                       break; // to exit code.

                                       // you can add multiple cases below , see in example
                                       .
                                       .
                                       .
                                       .
                                       .
                                       .
                                       .
         default : printf("") // if all statements are false then one default statement executes.
        }
*/

int main()
{
    char grade;

    printf("enter your grade\n\n");
    scanf(" %c", &grade);

    switch(grade)
    {
     case 'A' : printf("Excellent");
                break;
     case 'B' : printf("Work hard");
                break;
     case 'C' : printf("Not impressive");
                break;
     case 'D' : printf("this is very bad");
                break;
     default : printf("Not making sense");
    }
    return 0;
}
