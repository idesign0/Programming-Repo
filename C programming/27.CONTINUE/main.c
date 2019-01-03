#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =1;

    do{
        if(a==7 || a==8 ){
            a++;
            continue;
        }
       printf("%d is available\n",a);
       a++;

    }while(a<=10);


    return 0;
}
