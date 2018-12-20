#include <stdio.h>
#include <stdlib.h>
// so  if we have bunch of math operations what will be order of operations  , means what operation will take place
// lets see that
int main()
{
    int a = 4 + 5 * 4 / 2 ; // so which operation took place
    // order is following
    // 1. parentheses
    // 2. exponents
    // 3. Multiplications
    // 4. Divisions
    // 5. Addition
    // 6. subtraction
    printf("1.%d\n",a); // you can verify it
    return 0;
}
