#include <stdio.h>
#include <stdlib.h>

// continue is opposite of break statement , it will just live values which are written in the condition ,
// and starts loop from TOP,
// if you do not know know break statement's work check it out,
/*
syntax  // and you can use any of do while , while and for loop ,
    do{
        if(condition){
           statement
        }
       statement

    }while(condition);

*/
int main()
{
    int a =1;

    do{
        if(a==7 || a==8 ){  // here we are using or operator , you can check both values will be missing in output (7,8)
            a++; // it is necessary you increment value before continue statement
                    // otherwise code will be in ind=finite loop , TRy it :)
            continue; // now what continue is doing here is it is ignoring below print statement if condition is true
        }
       printf("%d is available\n",a);
       a++; // we added one value to a for further process

    }while(a<=10); // loop Starts from top.


    return 0;
}
