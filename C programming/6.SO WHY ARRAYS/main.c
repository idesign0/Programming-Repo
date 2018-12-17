#include <stdio.h>
#include <stdlib.h>

// So why Arrays ?
// we may just have string type variables to store our list of items. isn't is ? = you may have this types of questions
/*But we can do pretty cool things with it*/

        // you can access individual items that list or in Array

int main()
{
    char name[12] = "Dhruv patel";
    printf("My name is %s\n",name);
    //important !
    /*in C and any programming languages when you use array list individual elements are given one unique position,
     called index Numbers , and it always starts with Zero.*/
    /*Example : D = 0
                H = 1
                r = 2
                u = 3
                v = 4
                  = 5 // lol ! white space
                p = 6
                a = 7
                t = 8
                e = 9
                l = 10
    */
    name[4] = 'u';
    // here I took one item and assign it different character = 'u'
    printf("My name is %s\n",name);
    /* you don't have to assign memory to array by counting , now you Know the concept AND KNOW HOW IT WORKS.
     you can just leave box blank example. " char name[] ="Dhruv Patel" . program will assign it automatically
    */
     char food[] ="Huge Pizza";
     printf("I need one %s\n",food);

     // important
     // if you want to change the string value >>
     strcpy(food,"pasta"); // strcpy function is used to change the string value , like pizza to pasta
     printf("i need %s too\n",food);
     return 0;
}
