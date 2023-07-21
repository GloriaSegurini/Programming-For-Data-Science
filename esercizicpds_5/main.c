/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void whilefun() {
    int sum = 0;
int n;
while (sum < 100) {
    scanf("%d", &n);
    sum+= n;
}
printf("%d", sum);
}

void whilefun2() {
    int n;
    int i;
    scanf("%d", &n);
    i = 2;
    while (n%i && i<n) {
        i++;
        printf("value of i is %d", i);
    }
    printf("Value of i is %d", i);
    printf("qui %d", i<n);
}

void dowhile(){
    int n;
    do {
        printf("Enter an integer:");
        scanf("%d", &n);
    } 
    while (n>=0); 
    printf("here %d", n);
    
}

void elsedowhile() {
    int n = 1;
    int a;
    while (n >= 0){
        printf("enter an integer:");
        scanf("%d", &n);
    }
    
}

int main() {
    elsedowhile();
    return 0;
}
