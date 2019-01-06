#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//TODAY WE ARE GOING TO LEARN ABOUT CHARACTER FUNCTIONS ,
// YOU CAN SEE I HAVE INCLUDED ONE .h FILE , WE ARE GOING TO USE ONE FUNCTION WHICH IS GOING TO IMPORTED BY THIS FILE.
 // YOU CAN KNOW WHAT .h FILE DO , in "8. create header file" section.

 /*
    so i want to tell you some important things
    1) your computer doesn't understand " alphabets,strings,letters "
        yes , it cant . it just converts alphabets in numbers (series of 1 , 0)
    2) you can apply 'int' and 'char' datatypes interchangeably

    so whats the point ?

    lets see in code !
 */

int main()
{
    int name = 'b' ; // oh ! what i just do , did i make mistake ? no people. thats what i want to know you in (1)
    // your computer will convert alphabet into number.
    // you may think what is use of ctype.h file then.

    /*
        lets understand it.
        i want to check if my letter in name is alphabet of number , since we know computer is not able to do it ,read (1)
    */
    (isalpha(name)) ? printf("%c is Alphabet\n",name) : printf("%c is Number\n",name); // second example of interchangeably , you can use %c instead of %d in int.
    /* 'isalpha' is function imported by "ctype.h" , isalpha is character function. it checks whether its input is alphabet or not */

    // here if condition was false , then second statement will execute , see 20.SHORTHAND IF ELSE for better understanding of it.
    return 0;
}
