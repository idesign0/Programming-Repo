#include <stdio.h>
#include <stdlib.h>

// I'm TAKING PREVIOUS example of 29. and modifying it

int main()
{
    int name;

    printf("Enter letter\n");
    scanf(" %c",&name);

    if(isalpha(name)) // is alpha is character function to check input is character
    {
        if(isupper(name)){ // isupper is function to check whether function entered is uppercase or not,
            printf("%c is in uppercase\n",name);
        }else{
            printf("%c is lowercase\n",name);
        }
        }else{
        printf("input is not alphabet\n");
     }

     // i want to check for different symbols too,
    // i uploaded second screenshot for symbols , obviously it will print out last statement
    // you are programmer now ! :0
    return 0;
}

