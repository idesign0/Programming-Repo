#include <iostream>


using namespace std;

class getvalue{

public:
    getvalue(){
    }

private:
    int randomVar;
    int randvar2;

      friend void otherfun(getvalue go);
};

void otherfun(getvalue go){
    go.randomVar = 50;
    go.randvar2= 545;

    cout << go.randomVar << endl;
    cout << go.randvar2 << endl;
}


int main()
{
    getvalue geto;
    otherfun(geto);
    return 0;
}
