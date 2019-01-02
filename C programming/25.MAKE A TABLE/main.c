#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row;
    int column;

    for(row=1;row<=5;row++)
        {
            for(column=1;column<=10;column++)
            {
             printf("%d ",column);
            }
            printf("\n");
        }
    printf("Hello world!\n");
    return 0;
}
