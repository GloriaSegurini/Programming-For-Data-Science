/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void punt(){
    int a = 10;
    int *b;
    b = &a;
    
    printf("%d,%d,%d,%d", &b, b, &a,*b);
}


void array(){
    int arr[] = {0,1,2};
    int *b;
    b = arr + 1;
    
    printf("%d, %d", b, &arr[1]);
}


void aaa(){
    int b;
    scanf("%d", &b);
    int a[b];
    printf("%d", sizeof(b) * b);
    
}

int main()
{   //int a = 1;
    //int b = *a;
    //printf("%d", b);
    ciao();
    return 0;
}

