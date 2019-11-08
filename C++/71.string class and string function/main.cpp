#include <iostream>
#include <string>

using namespace std;


int main(){

    string x;

    getline(cin,x);

    cout << x;


    string x1("\n\nHello i'm Dhruv patel\n");
    string x3;
    string x2;


    x2=x1;

    x3.assign(x1);


    cout << x1<< x2<< x3;


    string s("Hello and hii");

    cout << s.at(1);

    for (char x=0 ; x<s.length() ; x++){

        cout <<s.at(x);

    }


}
