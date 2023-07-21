/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Write a program that reads from the keyboard an integerxand computesthe number of bytes necessary to storexvariables of typeint.
#include <math.h>
#include <stdio.h>

int nbytes(int a)
{   printf("prova");
    return sizeof(a);
}

int main()
{
    int a;
    int b;
    printf("Enter an integer: ");
    scanf("%d", &a);
    b = nbytes(a);
    //printf("Number of bytes necessary to store your integer: %d", b);
    printf("%d", b*a);
    return 0;
}