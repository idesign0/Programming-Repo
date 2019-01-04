#include <stdio.h>
#include <stdlib.h>

// now we are going to learn about break statement ,

    /*
     when we had a situation when we get our desired value in code , and don't want to proceed in program more.

     let me explain.

     if i have 100 numbers and then i told program give me number 76. and only 76 is my desire value , and i dont want to run program more.

            in this situation i like to use break statement , if i git my value , it will break th code as name suggest and loop starts from top.

        syntax;
        for(){

            if(condition){
                break;
            }
        }

    it it little difficult to grasp this , take time and try it own.
     */

int main()
{
    int a ;
    for(a=0;a<=100;a++)
    {
        printf("Print number a : %d\n",a);

        if(a==22){
                break;
                }
    }
    return 0;
}
