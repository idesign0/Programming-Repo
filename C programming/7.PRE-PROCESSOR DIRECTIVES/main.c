#include <stdio.h>
#include <stdlib.h>

/* you may be wondering what are those two lines above and what they do. */

// they are pre processor directives

/*you can understand i have downloaded this software ( Code Block) so i can have one particular space where i can write my codes
    but one thing the software it-self doing is converting my human readable code in Machine language ( binary languages ( 0 1 ) )
    . converting the higher level language into machine language is called compiling.

    /// This software do this behind the scenes .

    /// So what are the functions on pre processing ?

    /// so when program compiles it pre-process first. it first try to add every file which are needed to run the program.

    //// #Include is example of preprocessing directives.
    /// it is going to copy all data from the header file( ex stdio.h ) and put it in (#include <stdio.h>)'s place.
    /// same for #include <stdlib.h>.
    //// so in #include<stdio.h> what #include doing is it includes the file whatever we want to put in it.
    //// stdio.h is file we which is included here it stands for " standard input and output " that allows us to use printf
         put our output stuff on screen.

>>>> Another preprocessing directives you can use is #define.
*/

#define MYNAME "Dhruv patel"

/* here MYNAME IS CONSTANT . constant is type of variable which value remains same forever and Dhruv patel is value.
 you don't need semicolon after any preprocessing directives. lets see its example
*/
int main()
{
    printf("My name is %s\n",MYNAME);

    //SO WHAT IS GOING TO HAPPEN HERE
    // #define MYNAME "Dhruv patel" , PRE DIRECTORY is going everywhere in program g=for word MYNAME( which is our constant)
    // and apply its value

    //// NOW SEE " NEW HEADER FILE PROGRAM " FOR FULL UNDERSATNDING
    return 0;
}
