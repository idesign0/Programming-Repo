#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int howmany,i;
    float bestsrate=0.0;
    int bestPlayer;

    printf("How many times you want to add information : ");
    scanf(" %d", &howmany);

    int * pplayers = (int *)malloc(howmany*sizeof(int));
    int * pruns =  (int *)malloc(howmany*sizeof(int));
    int * pgames = (int *)malloc(howmany*sizeof(int));
    int * psrate = (int *)malloc(howmany*sizeof(int));



    for(i=0;i<howmany;i++){

        printf("Enter details of players : /n");

        printf("Enter Names of player : ");
        scanf(" %d ", &pplayers[i]);`

        printf("Enter Number of games played by player : ");
        scanf(" %d", &pruns[i]);

        printf("Enter Names of players : ");
        scanf(" %d", &pgames[i]);
    }

    for(i=0;i<howmany;i++){
        psrate[i]= (float)pruns[i]/(float)pgames[i];

        printf("\n %d \t %d \t %d \t %0.2f \t",pplayers[i],pruns[i],pgames[i],psrate[i]);

            if(srate[i]>bestsrate){
            bestsrate=srate[i];
            bestPlayer=players[i];

            }
    }

        printf("\n\n\t Best player is %d", bestPlayer);
}






