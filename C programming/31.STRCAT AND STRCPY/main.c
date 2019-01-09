#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Header string.h is used to call some built in functions which can be used to combined string , replace string , take amount of one string
// we are going to learn two functions
/* strcpy and strcat */
int main()
{
    //STRCAT(string concatenate) is used to add some new string behind existing string

    char name[100] ="hey!"; // adding string in back

    printf("%s\n",name);

    strcat(name," Dhruv."); // added new string in back

    printf("%s\n",name);


    ////// both examples are same , but above is explained in detail
    strcat(name," Dhruv.");

    strcat(name," how are you?");

    printf("%s\n",name);


    //you can verify results in the screenshot uploaded,

    //now what is " strcpy "

    strcpy(name, "How you doing\n"); // strcpy replaced previous string , it overwrites previous string.

    printf("%s\n",name);

    return 0;
}
