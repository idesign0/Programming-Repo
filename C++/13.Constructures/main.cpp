#include <iostream>
#include <string>
using namespace std;

class dhruvclass{

public:
    dhruvclass(string z){
    setname(z);
    }
    void setname(string x){
    name = x ;
    }
    string getname(){
    return name;
    }

private:
    string name;
};


int main(){

    dhruvclass doo("Patel Dhruv ");
    cout << doo.getname();

    dhruvclass doo2("");
    doo2.setname("Yo");
    cout << doo2.getname();


    }
