#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>


using namespace std;


int main(){
    int howmany=10;
    int lists[howmany];
    int i,swapped=1;
    int temp = 0;

    for( i=0; i<howmany ;i++){

        lists[i] = rand()%10 +1 ;

    }

        for(i=0; i<howmany ;i++){

        cout << lists[i] << endl;

    }


    while(swapped != 0){

        swapped = 0;

        for(i=0;i<howmany-1;i++){

           if(lists[i]<lists[i+1]){

            temp=lists[i+1] ;

            lists[i+1]=lists[i];

            lists[i] = temp;

            swapped = 1;
           }

        }
    }

    cout << "\n\n\n New List" << endl;

    for(i=0; i<howmany ;i++){

        cout << lists[i] << endl;

    }

}
