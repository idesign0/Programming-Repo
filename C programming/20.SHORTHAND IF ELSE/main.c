#include <stdio.h>
#include <stdlib.h>
/*
    TODAY WE ARE GOING TO LEARN ABOUT SHORTHAND IF

    SO , SHORTHAND IF is used when you have only two conditions , if only one can be true ,
    Basic logic is ###   (Test) ? TrueCondition : FalseCondition

    # here when test is satisfies , trueCondition will executes , and if test is not satisfies FalseCondition will satisfies.

    let.s tack a look

    in example we are going to type first Alphabet of our lastname , if first later if less than 'M' then it you will be placed in
    blue team , if no , then RED team.
*/
int main()
{
  char LastName[20]; // i suggest you to revise arrays for clear concept

  printf("What's your last name ?\n");
  scanf(" %s", LastName );

 ( LastName[0]< 'M' ) ? printf("Blue Team"): printf("Red Team");
}
