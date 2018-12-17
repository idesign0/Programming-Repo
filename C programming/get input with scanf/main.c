#include <stdio.h>
#include <stdlib.h>

/* today we are going to learn how to give input with help of scanf , scsnf is input taker.
    it takes input from user and run the code accordingly. so lets try
*/
int main()
{
    // declaration
  char Myname[20]; // array
  int Age; // number
  int Year; // number

  printf("What's your name?\n");
  scanf("%s",Myname);

  printf("What's your Age?\n");
  scanf("%d",&Age); // And dont forget to include " & " before every single variable except arrays ,
                    // we will talk about it in pointers

  printf("What's your birth year?\n");
  scanf("%d",&Year);


  // above code line is bunch of input it will take
  // what scanf is doing is stop program for while take inputs and runs it .

  // output line
  printf(" %s is %d years old , born in %d\n",Myname,Age,Year);
  return 0;
}
