#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char pass[9];
    int i;
    int digit;
    int capital;
    int symbol;

    printf("\n\n  Rules for better password !\n");
    printf("\n  Your password must only contain 8 characters\n");
    printf("  your password should have one uppercase\n");
    printf("  your password should have one digit\n");
    printf("  your password should have one symbol\n\n");

    printf("  type your password : ");

    scanf("%s", &pass);

   /*   printf("\npassword : %s ", pass); */
        int length = strlen(pass);
         printf("\n  length = %d\n",length);
        if(length==8){
        for(i=0; i<=7; i++){
                if(isupper(pass[i])){
                capital=1;
                }
        }
        for(i=0; i<=7; i++){
                if(isdigit(pass[i])){
                digit=1;
                }
        }
        for(i=0; i<=7; i++){
                if(!(isupper(pass[i]) && isdigit(pass[i]))){
                symbol=1;
                }
        }
        if(capital==1 && digit==1 && symbol==1 ){
            printf("\n\n  Your password is perfect !!\n\n");
        }else{
            printf("\n\n  idiot ! can't follow rules !!\n\n");
        }
        }
        else{
            printf("\n\tType only 8 characters !\n");
        }
    }


