#include <stdio.h>
#include <stdlib.h>
//TODAY ER ARE GOING TO TALK ABOUT INCREMENT OPERATOR
// WE PREVIOUSLY USED ONE OPERATOR SAY " B*= "
//THIS TIME WE GO INTO DETAILS

//  b++ , ++b is increment operators ,their meaning is same , but work differently ,
//lets see
int main()
{
    int a=0;
    printf("a = %d\n",a);
    a++;
    printf("a = %d\n",a);
    ++a;
    printf("a = %d\n",a);
    // you can see in out put there is no change in increment by using different type of syntax
    //so what is use ,lets see another example

    int b=5 , c=10 , ans ;

    ans = ++b * c ;
    printf("ANS(1) = %d\n",ans);

    b=5 , c=10 , ans ;
    ans = b++ * c ;
    printf("ANS(2) = %d\n",ans);


           /*
           See screenshot you will notice there is difference between Ans(1) and Ans(2).
           though operators ( ++b , ++b ) do same job ( increasing value by one , it has different meaning

           in ++b * c  , the increment in value 'b' happens before equation is solved.

           in b++ * c , the increment in value 'b' happens after equation is solved.

           that is main reason why we got 60 in first and 50 in last.

           */

    return 0;
}
