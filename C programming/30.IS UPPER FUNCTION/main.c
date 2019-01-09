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
        printf("input is not alphabet\n\n\n");
     }

     //IF YOU WANT TO CONVERT LOWERCASE LETTER IN UPPERCASE ,YOU CAN USE " TOUPPER() "
     char a = 'b';
     char b = '9';
     char c = 'F';
     printf("converting a into capital letter = %c\n",toupper(a));
     printf("converting b into capital letter = %c\n",toupper(b));
     printf("converting c into capital letter = %c\n",toupper(c));

     //you will see it will not do any change in uppercases or Numbers . it will only change in small alphabets

     // i want to check for different symbols too,
    // i uploaded second screenshot for symbols , obviously it will print out last statement
    // you are programmer now ! :0


    /////////FOR PRACTISE
    //so lets try something new , create a password which include numbers , alphabet and the symbols and executes only if three of them included
    //i want to put your own logic , because we can do this by different methods we learn so far ,

    /*int alphabet;
    int symbol;
    int number;

    printf("Your password should have Number , alphabet and symbol \n");
    printf("type your password's first letter  : \n");
    scanf(" %c",&alphabet);

    printf("type your password's second letter  : \n");
    scanf(" %c",&symbol);

    printf("type your password's third letter  : \n");
    scanf(" %cs",&number);

    if(isalpha(alphabet))
    {
        if(isdigit(number))
        {
            (isdigit(number)) ? printf("Dump password") : printf("Your password is Set!");
        }
    if(isdigit(number)){
        if(isalpha(alphabet))
        {
            (isdigit(number)) ? printf("Dump password") : printf("Your password is Set!");
        }
    }else{
      if(isalpha(alphabet))
        {
            (isdigit(number)) ? printf("Your password is Set!") : printf("Dump password");
        }
        if(isdigit(number))
        {
            (isalpha(alphabet)) ? printf("Your password is Set!") : printf("Dump password");
        }
    }
    }*/
    return 0;
}

