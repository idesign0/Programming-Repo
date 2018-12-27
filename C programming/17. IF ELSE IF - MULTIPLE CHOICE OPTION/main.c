#include <stdio.h>
#include <stdlib.h>

/*

    When you have multiple choices like your grades related to different subjects , we can use if else if statement.

    if you are not familiar with other types of if statement please check out last 4 modules,

*/

int main()
{
    float grade1;
    float grade2;
    float grade3;

    printf("Your grades ... \n");
    scanf("%f",&grade1);
    scanf("%f",&grade2);
    scanf("%f",&grade3);

    float avg = (grade1 + grade2 +grade3)/3;
    printf("Average : %.2f \n",avg);

    if(avg>=90)
        {
        printf("you got A\n");
    }

    else if(avg>=80)
        {
        printf("you got B\n");
    }
    else if(avg>=70)
        {
        printf("you got C\n");
    }
    else // after every possible solution , last remaining statement can be written in else.
    {
        printf("You are Dump !");
    }
}
