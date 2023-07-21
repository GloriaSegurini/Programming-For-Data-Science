/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

//scrivi un programma in cui user può inserire un tot di numeri e quando non vuole più inserirli, inserisce -1.
//Questi numeri vanno in un array: stampalo

void fun(int arr[], int n){
    int a;
    printf("Enter the first digit of your array:");
    scanf("%d", &a);
    
    if (a >= 0) {
        arr[0] = a;
        for (int i=1; i<n; i++) {
            int v;
            printf("Enter the other digits of your array:");
            scanf("%d", &v);
            
            if (v >= 0) {
            arr[i] = v;
            }
            
            else break;
        }
        
    }
    
}

int main()
{   int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int* array = malloc(sizeof(int)*n);
    fun(array, n);
    
    for (int a = 0; a < n; a++ ){
        printf("%d",array[a]);
    }
    
    free(array);
    return 0;
}
