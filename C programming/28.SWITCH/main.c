#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("enter your grade\n\n");
    scanf(" %c", &grade);

    switch(grade)
    {
     case 'A' : printf("Excellent");
                break;
     case 'B' : printf("Work hard");
                break;
     case 'C' : printf("Not impressive");
                break;
     case 'D' : printf("this is very bad");
                break;
     default : printf("Not making sense");
    }
    return 0;
}
