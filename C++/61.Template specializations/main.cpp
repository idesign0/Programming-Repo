#include <iostream>

using namespace std;

template <class T>

class number{

    public :
        number(T x){
            cout << x << " is not character !" << endl;
        }
};

template <>

class number<char>{

public:
    number(char a){
        cout << a << " is character" << endl;
    }
};


int main()
{
        number<int> no(50);
        number<double> no2(50.5566);
        number<char> no3('A');
}
