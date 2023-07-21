/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int myfun()
{   int a;
    a = 2;
    int b;
    b = 3;
    int i;
    int nums[2] = {a,b};
    //printf("%d", nums[0]);
    
    for (i = 0; i < 2; i++) {
        printf("%d,", nums[i]);
        
    }
    return 0;
}


void provafor() {
    int age[2];
    
    for (int i=0; i<2; i++) {
        printf("%d", age[i]);
    }
}

int main()

{   provafor();
    return 0;
}

