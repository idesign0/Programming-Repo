#include <iostream>
#include <string>

using namespace std;


int main(){

  string s("i'm Dhruv patel !");

  cout <<   s.substr(4,5) << endl;

  string a("Apples ");
  string b("Beams ");

  cout << a << b << endl;
  a.swap(b);
  cout << a << b << endl;

}
