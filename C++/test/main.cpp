#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main(){

    int  holder[25];
    int swapped=1,temp;

    srand(time(0));

    for(int x=0; x<=25; x++){

    int random = rand()%9;

    holder[x]= random;

    cout << "Old : "<<  holder[x] <<endl<<endl<<endl;
    }

    while(swapped != 0){

            swapped=0;

            for(int x=0;x<=24;x++){

                if(holder[x]>holder[x+1]){
                    temp=holder[x];
                    holder[x]=holder[x+1];
                    holder[x+1]=temp;

                swapped=1;

                }

            }


    }


    for(int x=0; x<=25; x++){

    cout<<"New " << x << " : " <<   holder[x] << endl;

    }

}
