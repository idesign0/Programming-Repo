#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    int diceroll =0 ;
    int diceroll2 =0 ;
    char prediction;
    char get;


    for(i=1;i<=20;i++){
        diceroll=rand()%6 +1 + diceroll;
        }

    printf("\t diceroll= %d \n",diceroll);
    printf("\t Enter your prediction Alphabet : ");
    scanf(" %c", &prediction);



     for(i=1;i<=20;i++){
        diceroll2=rand()%6 +1 + diceroll2;
        }

    printf("\t diceroll2= %d \n",diceroll2);

    if(diceroll2==diceroll){
            get='S';
        }else if(diceroll2>diceroll){
            get='H';
        }else{
            get='L';
        }

    if(get==toupper(prediction)){
    printf("\t You know probability well !");
    }else{
        printf("\t Bad luck ! try one more time !");
    }
}






