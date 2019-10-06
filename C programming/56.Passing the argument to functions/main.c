#include <stdio.h>
#include <stdlib.h>

void printing();

    int i;
    int marks[5];
    int main()
{

    for(i=0;i<5;i++){
        printf("Give use your %d marks : " ,i+1);
        scanf(" %d", &marks[i]);
    }
    for(i=0;i<5;i++){
        printing(marks[i]);
    }
    return 0;
}

void printing(int marks){
    printf("\nPrinting the value %d : %d\n",i+1,marks);
}
