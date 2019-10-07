#include <stdio.h>
#include <stdlib.h>

void printing();
    int howmanydhruv;
    int howmanydhruvil;
int main(){
    printf("How many years you have been in company : \n");
    scanf(" %d",&howmanydhruv);
    printf("How many years you have been in company : \n");
    scanf(" %d",&howmanydhruvil);

    int totalBonusdhruv = bonus(howmanydhruv);
    int totalBonusdhruvil = bonus(howmanydhruvil);
    printf("Bonus = %d ",totalBonusdhruv);
    printf("Bonus = %d ",totalBonusdhruvil);
}

int bonus(int year){
       int  bonus= 250*year;
        if(year>10){
            bonus += 1000;
        }

        return bonus;

}
