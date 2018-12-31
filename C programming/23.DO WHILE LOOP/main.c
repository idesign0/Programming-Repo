#include <stdio.h>
#include <stdlib.h>
// in previous topic we learn while loop

//we saw code stops when condition is false , what we do when we need code to be run ones atleast one though condition is false.

//  then we use do while loop , let me give syntax
/*
    do
    {
     Statements ( printf , scanf , inputs , score , average. )
    }while(condition)

    you may know in computer computer executes code from top to down , so logically do loop will run but while loop will stop it


    now i am starting to take some level up examples , so recommend you to try every code on your own , and see for better
    understanding
 */



 /* Now i am taking example of exam grades , suppose teacher have to enter bunch of students grades , now we have done that but
    it was job to enter grades and not having previous record , in this matter do while code is good .
    ( you will understand it in minutes.)


 */
int main()
{
    float grade=0;  //suppose teacher want your grade record.
    float scoreEntered=0; //she will marks of each test , it is our input
    float NumberofTest=0; // number of test
    float average=0; // our final output will be average,

    // INITIAL VALUES ARE 0

    printf("Press 0 when complete:\n\n"); // when you will enter 0 code will stop running , check while loop

    do
    {
        printf("  Test=%0.f  Average=%.f  \n\n",NumberofTest,average); // Here data will be displayed

        printf("Enter test Score :"); // for our input
        scanf("%f",&scoreEntered);

        grade += scoreEntered; // every score will added to grade
        NumberofTest++;
        average=grade/NumberofTest;

    }while(scoreEntered!=0); // to stop code enter 0
    return 0;
}
