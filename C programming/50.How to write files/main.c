#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer;
    fpointer = fopen("Dhruv.txt","w");
    fprintf(fpointer,"Hii i am Dhruv !");
    fclose(fpointer);
    return 0;
}






