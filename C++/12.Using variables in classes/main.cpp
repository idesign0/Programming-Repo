#include <iostream>

using namespace std;

class dhruvclass{

public:
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

    dhruvclass dhruvobj;
    dhruvobj.setname("I am Dhruv Patel");
    cout << dhruvobj.getname();

    }
