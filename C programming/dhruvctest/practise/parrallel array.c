#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i;
    int players[5]={10,25,100,107,7};
    int runs[5]={55,25,10,65,99};
    int games[5]={10,9,10,8,6};
    float srate[5];
    float bestsrate=0.0;
    int bestPlayer;

    for(i=0;i<5;i++){
        srate[i]= (float)runs[i]/(float)games[i];

        printf("\n %d \t %d \t %d \t %0.2f \t",players[i],runs[i],games[i],srate[i]);

            if(srate[i]>bestsrate){
            bestsrate=srate[i];
            bestPlayer=players[i];

            }
    }

        printf("\n\n\t Best player is %d", bestPlayer);

}






