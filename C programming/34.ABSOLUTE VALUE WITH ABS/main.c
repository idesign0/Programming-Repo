#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


// SOMETIMES WE NEED ABSOLUTE VAUES , AND OTHERWISE OUR PROGRAMME DO NOT GIIVE WRONG DATA AND PROGRAM WILL CRASH
// WE WILL USE abs function for it , and include math.h file
int main()
{
    float birth;
    float current;
    float age;

    printf("enter birth year :",birth);
    scanf(" %f", &birth);

    printf("enter current year :",current);
    scanf(" %f", &current);

    age=birth-current;

    printf("current age is %.2f\n",age);

    age=abs(age); // you will see difference in output

    printf("current age is %.2f\n",age);

    //talking about two more functions
    /* power functions and square root function */
    int n;
    int m;

    n = pow(3,4); // (3 * 3 * 3 * 3) ans 81

    m = creenshsqrt(81); // ((81)^1/2) ans 9

    printf(" n=%d and m=%d ",n,m);

    return 0;
}
