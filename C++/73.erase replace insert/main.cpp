#include <iostream>
#include <string>

using namespace std;


int main(){

  string s("i'm Dhruv patel and i love everything!");


    cout << s.find("Dhruv patel") << endl;

    s.erase(5);

    cout << s << endl;

    s.replace(4,9,"kathan");

    cout << s << endl;

    s.insert(4,"patel ");

    cout << s << endl;

}
