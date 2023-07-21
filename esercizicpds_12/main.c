#include <stdio.h>
#include <stdlib.h>

int main()
{   int n = 5;
    int size = sizeof(int);
    int* arr = malloc(n*size);
    
    for (int i=0; i<n; i++) {
        *(arr+i) = i;
    };
    
    for (int i=0; i<n; i++) printf("%d", *(arr+i));
    
    free(arr); /////////////////!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    return 0;
    
};
