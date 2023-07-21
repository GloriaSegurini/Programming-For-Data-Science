/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define L 5
#include <time.h>
#include <string.h>

int main()
{   /*srand(time(NULL));
    int num = rand()%L;
    printf("%d", num);

    char* p = "abc";
    
    printf("%s,%s",p,p+1);
    */
    char strarr[20];
    //fgets(strarr, 20, stdin );
    //printf("\n%s", strarr);
    
    char* p="hello world";
    int l = strlen(p); //strlen vuole solo l'indirizzo di memoria
    printf("%d",l);
    
    


    
    return 0;
}
