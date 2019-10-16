#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main()

{
    int x;

    while(x!=0){
    int i;
    int diceroll =0 ;
    int diceroll2 =0 ;
    char prediction;
    char get;


    srand(time(0));


    for(i=1;i<=20;i++){
        diceroll=rand()%6 +1 + diceroll;
        }

    printf("\t\n diceroll= %d \n\n",diceroll);

    printf("\t Predict : \n\n ");
    printf("\t Type H=high value \n ");
    printf("\t Type L=lower value \n ");
    printf("\t Type s=same value \n\n ");
    printf("\t Enter your prediction Alphabet : ");
    scanf(" %c", &prediction);



     for(i=1;i<=20;i++){
        diceroll2=rand()%6 +1 + diceroll2;
        }

    printf("\t\n diceroll= %d \n\n",diceroll2);

    if(diceroll2==diceroll){
            get='S';
        }else if(diceroll2>diceroll){
            get='H';
        }else{
            get='L';
        }

    if(get==toupper(prediction)){
    printf("\n\t You know probability well !\n\n");
    }else{
        printf("\n\t Bad luck ! try one more time !\n\n");
    }
    printf("Type value other then 0 to try another time !\n\n");
    scanf(" %d", &x);

}


}



