#include <stdio.h>
#include <stdlib.h>

/* String terminator is process do its job behind the scene , we do not have to do it manually and we can't even noticing
it in output so why we need to know about it ?! big question !!  */

/* in every string C want to know when given string is ending(yeah stupid Pc) so to tell it system automatically adds one
special character ("/0") at end.*/

/* so it increases on more bit to the string , in some cases like array we have to mention the total bits string
containing. so computer can give remaining space to other stuff. too much to handle , well lets code ! */
int main()
{
//    string='my name is Dhruv/0'
    /*here including white space string has 16 bits , no my math is not week ,
    we included special character "/0" here . that is what program doing automatically */

///////////////////////////////////////////////
/* now what is Array ? */
// array is list of items of same data types , items can be strings , integer , floats etc.

//fist we define which type of data type
//then name it.
//specify size.
    char name[12] = "Dhruv Patel";
    printf("my name is %s",name); // again ! only strings are in between quotations.
    return 0;
}
