
#include <stdio.h>
#include <stdlib.h>
typedef enum food_cat {
    kribbles, //0
    canned_food, //1
    tuna_fish //2
}cibo ;

typedef struct cat {
        int id;
        int age;
        float weight;
        cibo food;
    }gattostr;

void catfun(gattostr* gatti, int n, float* ptr)   {
    
    for (int i=0; i<n; i++) {
       //insert id for cat
        int id_;
        printf("write cat's id:");
        scanf("%d", &id_);
        gatti[i].id = id_;
        
        //insert age for cat
        int age_;
        printf("write cat's age: ");
        scanf("%d", &age_);
        gatti[i].age = age_;
        
        //insert weight for cat
        float weight_;
        printf("write cat's weight: ");
        scanf("%f", &weight_);
        gatti[i].weight = weight_;
        *ptr+= weight_;
        
        //insert food for cat
        int food_;
        printf("write cat's food_: ");
        scanf("%d", &food_);
        gatti[i].food = food_;
    
     };
     *ptr = *ptr/n;
    };
    
int main(){
    
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    
    float avg_w;
    gattostr gatti[n];
    catfun(gatti, n, &avg_w);
    printf("%f", avg_w);
    
    /*Print, in the same order of input, one per line, the identification codes
and the type of food of all cats that have less than 4 years and weight
more than the average of all cats. Beside the identification code, print,
separated by an empty space, the type of the food that the cat eats, that is
kibbles, canned or tuna.*/
    for (int i=0; i<n; i++){
        if (gatti[i].weight > avg_w && gatti[i].age < 4) printf("%d\n", gatti[i].id); 
            

        if (gatti[i].food == 0) printf("the type of food for cat %d is kribbles", i);
        else if (gatti[i].food == 1) printf("the type of food for cat %d is canned food", i);
        else if (gatti[i].food == 2) printf("the type of food for cat %d is tuna", i);
        
    };
    return 0;
};

