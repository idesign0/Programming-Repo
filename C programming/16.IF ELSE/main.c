#include <stdio.h>
#include <stdlib.h>


// I AM CONTINUING NESTED IF FOR "IF ELSE" EXPLANATION

/* generally in if and nested if statements execute the output if condition is true
    and if statement is false , they will just skip it up , not even executes output if we do not put additional if statement

    here if else statement comes , if condition is false it will execute different output , without repeatedly using
     'if' .


     For else you don't need statement , it runs default if  , condition is false.

     so else is very good whwn we has two choices.
    */

int main()
{
   {
     int age;
     int gender;
    //if you are using or any other software for c , just left one space whenever you are using converging character in scanf,
    // otherwise your code may not be recognize.
    printf("what's your age ?\n");
    scanf(" %d",&age);

    printf("what's your gender ? (m/f)\n");
    scanf(" %c",&gender);

    if(age>=18){ // logic 1
        printf("you are allowed in Club");

        if(gender == 'm'){

            printf(" dude");

            }else{  // here we removed female f statement from nesting if.(if you want to check go to nesting if file)

            printf(" lady");

            }

    }else{ // here i removed second statement of if  and simply put else.
        printf("you are not allowed");
    }
    return 0;
}
}
