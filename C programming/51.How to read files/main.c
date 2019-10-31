#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer = fopen("Dhruv.txt","r");
    char singleline[100];

    while(!feof(fpointer)){

        fgets(singleline,150,fpointer);
        puts(singleline);
    }

    fclose(fpointer);
    return 0;
}






