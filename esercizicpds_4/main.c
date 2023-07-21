/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void arrayfun() {
    int a;
    int i;
    int n;
    printf("Insert the size of your array:");
    scanf("%d", &n);
    int array[n];
    
    for (i = 0; i < n; i++) {
        array[i] = i*2;
    }
    for (a = 0; a < n; a++) {  //it was possible to make a single loop, but I prefer this fashion for understarding C for the first time :)
        int b = array[a];
        printf("%d", b);
    }
    
}

void array2(){
    int array[3];
    int a = array[4]; //UNPREDICTABLE result
    printf("%d", a);
}



int main()
{
    array2();
    return 0;
}

