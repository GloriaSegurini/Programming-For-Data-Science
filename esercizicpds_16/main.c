//utente inserisce due stringhe di lunghezza max 10 in una funzione e poi nel main controlla se hanno la stessa lunghezza.
//se hanno stessa lunghezza, stampa quella minore a livello lessicografico, altrimenti stampa quella di lunghezza minore
#include <stdio.h>
#include <string.h>

void funstr(char* str1, char* str2){
    //enter str1
    
    printf("Enter a string: ");
    scanf("%s", str1);
    //printf("%s", str1);
    
    //enter str2
    
    printf("Enter a string: ");
    scanf("%s", str2);
    //printf("%s", str2);
};

int main()
{   char str1[10];
    char str2[10];
    funstr(str1, str2);
    
    if (strcmp(str1, str2) < 0) printf("%s", str1);
    else printf("%s",str2);

    return 0;
};
