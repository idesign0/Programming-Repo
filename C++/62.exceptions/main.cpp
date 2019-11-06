#include <iostream>

using namespace std;

int main()
{
       try{
           int son = 30;
            int mother = 3;

            if(son>mother){

                throw 99;

            }

       }catch(int x){
        cout << "son cant be older then mother ERROR : " << x ;
        }
}
