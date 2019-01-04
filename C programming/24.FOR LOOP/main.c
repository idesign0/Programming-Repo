#include <stdio.h>
#include <stdlib.h>

/*
    Today we will learn For loop, For loop is more controlled way to execute any code or any logic .
    there are wide applications for for loop in c programming and in projects.

    it's main concept is to apply variable which is within some value , and incrementing its value by some constant

    syntax :

    for(initial value(a=0) ; end value(a<=10); incrementing value(a++))
    {
            statements;
    }

        so how it will executes ?

        first it will take last value or initial value (for first time) ,take value in logic and then loop it and add increment
        operation on variable,
*/

int main()
{
   int a ;
   int b;


   for(a=0;a<=10;a++) // position 1
   {
       printf("Value of A is %d \n\n",a);

   } // from here loop will redirected to for loop ( position 1) and value will be added to a = a+1


  //lets take one more example
  // lets print out numbers between 1 to 1000 , and numbers will be even

  for(b=0;b<=1000;b+=2)
  {
    printf("Numbers : %d\n",b);
  }

    return 0;
}
