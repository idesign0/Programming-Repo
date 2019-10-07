#include <iostream>

using namespace std;
int printing(int * x);
int main()
{
    int sum=0;
    printing(&sum);
    cout<<"sum :"<<sum;
    return 0;
}

int printing(int * x){
   *x=5;
   return *x;
}
