#include <stdio.h>
#include <stdlib.h>
// cut the string when exeds the array
int main()
{
    char name[5];
    char * pname = name;
    fgets(pname,5,stdin); // fgets used to cut the string for prevent data writing
    // stdin is for standard input // pname pointer variable
    puts(pname);
    return 0;
}
