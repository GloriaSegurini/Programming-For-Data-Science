//programma per inserire, attraverso una struct, i membri della tua famiglia con iniziale del nome, anno di nascita 
//e li colleghi in modo ricorsivo. Stampa l'anno di nascita medio nel main e riempi i valori della struct in una funzione
#include <stdio.h>

struct family{
    char name;
    int byear;
    struct family* mamma;
    struct family* babbo;
};
typedef struct family family;
void fun(family* name1, family* name2, family* name3, float* average) {
    //struct MARIO method 2
    
    (*name1).name = 'M';
    (*name1).byear = 1956;
    *average+= name1->byear;
    
    //struct GLO
    
    name2->name = 'G';
    name2->byear = 1998;
    *average+= name2->byear;
    
    //struct MARTA
    
    name2->mamma = name3;
    name2->mamma->name = 'M';
    //oppure Gloria.mamma->name
    name2->mamma->byear = 1960;
    *average+= name2->mamma->byear;
    
    //set Glo's parents
    
    name2->babbo = name1;
    
    *average = *average/3;
}
int main()
{   
    float avg_byear = 0;
    family Mario;
    family Gloria;
    family Marta;
    
    fun(&Mario, &Gloria, &Marta, &avg_byear);
    
    printf("%f", avg_byear);

    return 0;
}
