#include <stdio.h>
#include <stdlib.h>
/* What is typecasting /

    typecasting is changing the dataType of variable TEMPORARY .

    I HAVE WRITTEN HOE TO ASSIGN DATA TYPES AND WRITE FORMULAS IN PREVIOUS MODULES , IF YOU ARE KNEW CHECK
     MATH OPERATORS AND ORDER OF MATH OPERATORS MODULE,

 */
int main()
{
    float avgprofit;
    int priceofPumpkins = 7;
    int sales=50;
    int days=9;

    // first i want you to write two different types of logic , try and see result
    avgprofit = priceofPumpkins * sales / days ;

    printf(" My average profit per day is %.2f\n",avgprofit);

    //////

    avgprofit = (float)priceofPumpkins * (float)sales / (float)days ;

    printf(" My average profit per day is %.2f\n",avgprofit);  // .2f% because we want two decimal accuracy


    // you should come to conclusion that first ones output is giving whole number (integer)
    // and second one giving float value.
    // talking about first one why it is int , even we set data type with float.
    // because in c there is a problem of converging dataType automatically , first ones output will be same (int) because
    // we haven't told C to convert ,

    /* so in second logic we change the dataTypes of ( int ) into ( float ) temporary ,
    it can be done by writing dataType ahead of variable , (dataType)(variable)

    ANG THIS [PROCESS USUALLY CALL TYPECATING

    */
    return 0;
}
