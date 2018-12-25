#include <stdio.h>
#include <stdlib.h>


// nesting if basically  makes program more interactive

// taking example of if statement , we we have done previous time , please check it out if you haven't seen it.
int main()
{
     int age;
     int gender;
    //if you are using or any other softwere for c , just left one space whenever you are using converging character in scanf,
    // otherwise your code may not be recognize.
    printf("what's your age ?\n");
    scanf(" %d",&age);

    printf("what's your gender ? (m/f)\n");
    scanf(" %c",&gender);

    if(age>=18){ // logic 1
        printf("you are allowed in Club");
        if(gender == 'm'){
            printf(" dude");
            }
        if(gender == 'f'){
            printf(" lady");
            }

    }


    if(age<18){ //logic 2
        printf("you are not allowed");
    }



    // if you type below value 18 , whole logic  1 will skip and logic 2 will print out.
    return 0;
}
