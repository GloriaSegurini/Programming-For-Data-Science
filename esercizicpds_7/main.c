/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <math.h>
#include <stdio.h>

double diffabs(float a, double b); //prototype

int main()                                
{   float a;                              
    double b;
    a = 3.14;
    b = -2.17;
    //printf("%2f, %2f", a, b);

    double a1;
    double b1;
    a1 = diffabs(a,b);
    printf("Value of a - b is %.2f and value of b - a is %.2f", a1 , b1);
    return 0;
}



double diffabs(float a_, double b_)
{
    long double value_a_b;
    double value_b_a;
    value_a_b = a_ - b_;
    value_b_a = b_- a_;
    return value_a_b;
    //"Value of a-b is %f/n and value of b-a is %f/n", value_a_b, value_b_a

}
