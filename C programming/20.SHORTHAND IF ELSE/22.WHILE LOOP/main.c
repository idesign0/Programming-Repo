#include <stdio.h>
#include <stdlib.h>
/*
    TODAY WE ARE GOING TO TALK ABOUT ONE OF THE MOST IMPORATNT AND POWERFUL TOOL , 'WHILE LOOP'.

    WHILE LOOP IS USED FOR EXECUTING SAME CODE  OVER AND OVER AGAIN , UNTIL CONDITION IN WHILE LOOP IS FALSE.

    SYNTAX

    WHILE(TEST){
      STATEMENT ( EX , INCREMENTAL CONDITIONS  )
    }

    lets tack a look
*/
int main()
{
    int a=0;
    while(a<5)
    {
        printf("A = %d\n",a);
        ++a;
    }


    // lets see if we can do some complex problems

    // suppose we making our money double every dAY AND WE WANT TO KNOW amount of money in certain period.

    int day =1;
    float money =5; // in rupees

    while(day<=30)
    {
        printf("On Day %d you may have %f /- Rupees\n",day,money);

        day++;
        money *= 2; // you may seen this sign in previous modules , if not it means that initial value its taken , multiply buy two
                    // and generated new value
    }

    // if you don't know how to use while loop , you may have to write this statement 30 times ,  :)
    return 0;
}
