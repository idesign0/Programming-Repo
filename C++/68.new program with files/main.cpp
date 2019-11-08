#include <iostream>
#include <fstream>

using namespace std;

int getwhatuserwant();
void displayitems(int);

// main function
int main()
{
    int whatuserwant;

    whatuserwant = getwhatuserwant();
    while(whatuserwant!= 4){

        switch(whatuserwant){
            case 1 :
                displayitems(1);
                break;
            case 2 :
                displayitems(2);
                break;
            case 3 :
                displayitems(3);
                break;
        }


      whatuserwant = getwhatuserwant();

    }



}

// for getting values
int getwhatuserwant(){

    int choices;


    cout << " 1 --- Plain Items " << endl;
    cout << " 2 --- Helpful Items " << endl;
    cout << " 3 --- Harmful Items " << endl;
    cout << " 4 --- quit program " << endl << endl;


    cin >> choices ;

    return choices;

}

// for displaying items

void displayitems(int a){


    ifstream objectfile("object.txt");
    string name;
    double power;


    if(a==1){
    while(objectfile >> name >> power){

        if(power==0){

            cout << name <<','<< power << endl;

        }
        }
        }

   if(a==2){
    while(objectfile >> name >> power){

        if(power>0){

            cout << name <<','<< power << endl;

        }
}
}

   if(a==3){
    while(objectfile >> name >> power){

        if(power<0){

            cout << name <<','<< power << endl;

        }
}
}
}
