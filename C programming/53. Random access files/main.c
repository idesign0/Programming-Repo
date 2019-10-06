#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer=fopen("Dhruv.txt","w+");

    fprintf(fpointer,"Hii i wasdhruv patel ! ");

    fseek(fpointer,6,SEEK_SET);
    fprintf(fpointer,"am ");

    fclose(fpointer);
    return 0;
}
