#include <iostream>
#include <fstream>

using namespace std;

int main()
{
       ifstream dhruvsfile("Data.txt");

        if(dhruvsfile.is_open()){

        cout << "Go ahead ! you associated file with object !" << endl;
        cout << "Add details like name, id number, money"<< endl<< endl;

         int idnumber;
         string name;
         double money;

         while(dhruvsfile >> idnumber >> name  >> money){
                cout << idnumber <<','<< name  <<','<< money << endl;
         }
        }
        else{

        cout << "you messed up !" ;

            }
}
