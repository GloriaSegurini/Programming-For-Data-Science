#include <stdio.h>
#include <stdlib.h>
int* funarr(int* array1, int* array2, int n, int* final) {
    
    for (int i=0; i<n; i++) {
        *(final+i) = array1[i] + *(array2+i);
        
    };
    
    int prova_arr ;
    return prova_arr;
};

int main()
{   
    int n = 5;
    int size = sizeof(int);
    int* arr = malloc(n*size);
    
    for (int i=0; i<n; i++) {
        *(arr+i) = i;
    };
    
    for (int i=0; i<n; i++) printf("%d", *(arr+i));
    
    
    int a[] = {0,1,2,3,4};
    int final[5];
    int* aaa = funarr(a, arr, n, final);
    
    for (int i=0; i<n; i++) printf("%d", *(aaa+i));
    
    
    free(arr);
    return 0;
    
};

