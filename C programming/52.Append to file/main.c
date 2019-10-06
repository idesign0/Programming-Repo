#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer=fopen("Dhruv.txt","a");

    fprintf(fpointer,"\n\n written by dhruv patel");

    fclose(fpointer);
    return 0;
}
