#include <iostream>
#include <fstream>

using namespace std;

int main()
{
       ofstream dhruvsfile("Dhruv.txt");

        if(dhruvsfile.is_open()){

        cout << "Go ahead ! you associated file with object !" ;

       dhruvsfile << "I'm Dhruv patel !";
         }
        else{

        cout << "you messed up !" ;

            }




        dhruvsfile.close();
}
