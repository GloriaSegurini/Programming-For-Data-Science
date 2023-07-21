#include <stdio.h>
#include <string.h>

char* A[3] = {"cactus","banana","albero"};


void sort(char** A, int n){
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (strcmp(A[i], A[j]) > 0) {
                char* tmp[1] = {A[i]};
                A[i] = A[j];
                A[j] = tmp[0];
            };
        };
    };    
};
  
int main()
{   sort(A,3);
    
    for (int i = 0; i<3; i++) {
        printf("\n%s", A[i]);
    };
    return 0;
};
