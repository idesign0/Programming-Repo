#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade;
    float scoreEntered;
    float NumberofTest;
    float average;

    printf("Press 0 when complete:\n\n");

    do
    {
        printf("  Test=%0.f  Average=%.f  \n\n",NumberofTest,average);

        printf("Enter test Score :");
        scanf("%f",&scoreEntered);

        grade += scoreEntered;
        NumberofTest++;
        average=grade/NumberofTest;

    }while(scoreEntered!=0);
    return 0;
}
