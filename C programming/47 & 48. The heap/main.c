#include <stdio.h>
#include <stdlib.h>
// heap is a way to allocate the extra memory from system (pc)
int main()
{
    int i,howmany;
    int total = 0;
    float average = 0.0;


    printf("How many value you want to add !? ");
    scanf(" %d",&howmany);


// below code is taking memory from system
// talking from right ! size of the int is get by "sizeof command"
//then it multiplied by user given variable , howmany . "how many time you want to add numbers ?!"
// malloc fun. use for allocates the data
// then it is type cast by int pointer in name of pspace;


    int * pspace = ( int *)malloc(howmany*sizeof(int));
//running loop five times
    for(i=0;i<howmany;i++){

         printf("%d number : ",i+1);

        scanf(" %d",&pspace[i]);

        total+=  pspace[i]; // getting total via dereferencing
    }

    for(i=0;i<howmany;i++){

        printf("Space Numbers[%d]: %d \n",i+1,*(pspace+i));

    }

        printf("Total : %d ",total); // print the total

        average = (float)total/(float)howmany; // typecast for  average

        printf("Average : % f ",average); // print average

    free(pspace);
    return 0;
}
