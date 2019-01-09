#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
// PUTS IS BETTER WAY TO PRINT OUTPUT IN SCREEN
// GETS US RESPLACEMENT OF SCANF AS PUTS IS REPLACE OF PRINTF.

//we will also use strcat

//LETS UNDERSTAND BY EXAMPLE

int main()
{
    char myname[50];
    char food[50];
    char sentence[50];
/*
    all sntax will be same just put "puts" insted of and "gets" insted of scanf
*/
        puts("What's your Name?"); // you dont have to put \n behind output in puts , its built in , (Yay !)

        gets(myname); // one advantage is you can add whole string in gets , in comparison scanf can only add one word !

        puts("what your favorite food ?");

        gets(food);

        strcat(sentence,myname);
        strcat(sentence," 's favorite food is ");
        strcat(sentence,food);

        puts( sentence );

    return 0;
}
