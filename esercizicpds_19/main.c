#include <stdio.h>
#include <stdlib.h>

struct family{
    int age;
    char* name;
    struct family* mum;
    struct family* dad;
};

void fun(struct family* ma, struct family* ba, struct family* fi){
    (*ma).age = 63;
    ba->age = 67;
    fi->age = 25;
    
    /*
    ma->name = malloc(5);
    ba->name = malloc(5);
    fi->name = malloc(6);
    */
    //set names by string
    ma->name = "Marta";
    ba->name = "Mario";
    fi->name = "Glo";
    
    //set parents
    fi->mum = ma;
    fi->dad = ba;
    
    ////free still to do!!!///////
};
int main()
{
    struct family mamma;
    struct family babbo;
    struct family figlia;
    
    fun(&mamma, &babbo, &figlia);
    
    printf("%s", mamma.name);
   
    return 0;
};
