#include <stdio.h>
#include <stdlib.h>
// today we are going to talk about increments in value of variable and calculation of interest
int main()
{
    int pageviews = 0 ;
    pageviews = pageviews + 1;

    // above its call incrementation of variable
    // it takes last value of variable and add constant here 1 is constant value each time .
    // lets try it on output

    printf("pageviews : %d\n",pageviews);
    pageviews = pageviews + 1;
    printf("pageviews : %d\n",pageviews);
    pageviews = pageviews + 1;
    printf("pageviews : %d\n",pageviews);
    pageviews = pageviews + 1;
    printf("pageviews : %d\n",pageviews);

    // you can see results in screenshot , value is increasing.
    // each time variable takes its last value and add values in it

    // Now about interest
     float balance = 1000 ;
     // now you can try two ways too calculate interest.
     // previous one balance = balance * 1.1 ( our interest is 1.1
     // more likely is balance *= 1.1
     // both have same meaning

     balance *= 1.1 ;
     printf("Bank balance: %f\n", balance);
     balance *= 1.1 ;
     printf("Bank balance: %f\n", balance);
     balance *= 1.1 ;
     printf("Bank balance: %f\n", balance);

    return 0;
}
