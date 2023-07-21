#include <stdio.h>
#include <stdlib.h>
enum food_cat {
    kribbles = 0, //0
    canned_food = 1, //1
    tuna_fish = 2, //2
};

struct cat {
    int id;
    int age;
    float weight;
    enum food_cat food;
};

void catfun(){
    int n;
    printf("Enter an integer:");
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        //insert name for cat
        char name_;
        struct cat name_;
        printf("enter cat's first letter:");
        scanf("%c", &name_);
        break;};};
    
        /*
        //insert id for cat
        int id_;
        printf("write cat's id:");
        scanf("%d", &id_);
        name.id = id_;
        
        //insert age for cat
        int age_;
        printf("write cat's age: ");
        scanf("%d", &age_);
        name.age = age_;
        
        //insert weight for cat
        float weight_;
        printf("write cat's weight: ");
        scanf("%f", &weight_);
        name.weight = weight_;
        
        //insert food for cat
        int food_;
        printf("write cat's food_: ");
        scanf("%d", &food_);
        name.food = food_;
    
     };
    };
    
    */
int main()
{   catfun();
    return 0;
}

