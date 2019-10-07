#include <iostream>

using namespace std;
int variables(int x, int y, int z, int w);
int main()
{
    int sum;

    cout<<"sum :"<< variables(45,45,45,45);
    return 0;
}

int variables(int x, int y, int z, int w){
   int answer = x+y+z+w;
   return answer;
}
