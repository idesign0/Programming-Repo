#include <iostream>


using namespace std;

class getvalue{

public:
    getvalue(){
        randomVar=0;
    }

private:
    int randomVar;

      friend void otherfun(getvalue go);
};

void otherfun(getvalue go){
    go.randomVar = 50;

    cout << go.randomVar << endl;
}


int main()
{
    getvalue geto;
    otherfun(geto);
    return 0;
}
