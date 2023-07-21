/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reversearr(){
    int n;
    printf("enter a positive integer for your array length:");
    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; n>i; i++){
        array[i] = i;
    }
    
    for (int a = n-1; a >= 0; a--) {
        int b = array[a];
        printf("%d\n",b);
    }
 
}
int main()
{
    reversearr();
    return 0;
}


