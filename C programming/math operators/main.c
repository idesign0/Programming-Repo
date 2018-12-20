#include <stdio.h>
#include <stdlib.h>

// to we are going to talk about Math operators in c

int main()
{
    // starting with initializing and declaring variable
    int weight = 52 ;
    printf("My weight is %d kg\n",weight);

    // now what i want you too see guys that you can do math operations on printf statement.
    // and values will be changed in output , see in screenshoT PAGE

    printf("1. My weight is %d kg\n",weight + 12);
    printf("2. My weight is %d kg\n",weight - 12);
    printf("3. My weight is %d kg\n",weight / 12);

    // lets use % ( modulas ) it will simply give us remainder ( back-number ) number

    printf("4. My weight is %d kg\n",weight % 26);
    printf("5. My weight is %d kg\n",weight % 15);


    // lets talk about float and integer
    int a = 82 ;
    int b = 25 ;
    printf(" 6. %d",a/b);

    float a = 82.5166 ;  // for float type
    float b = 25.651 ;
    printf("7. %f",a/b); // %f for floats


    return 0;
}
