//Write a C program that asks the user to define a struct person with the fields name, age, gender (enum with values male, female, other)
//the program read from input an integer n and then allocates an array of struct perosn of size n.
//Fill the array with data entered by user (ask the user for the fileds of each person with an iterative loop).
//Print the people having the age >= 18 and the male gender.
#include <stdio.h>
enum gender {
    male,
    female,
    other
};


struct person {
    char name[20];
    int age;
    enum gender gen;
    
};

int main()
{   //let user insert number of iterations
    int n;
    printf("enter an int:");
    scanf("%d", &n);
    
    //create struct person
    struct person persone[n];
    
    for(int i=0; i<n; i++) {
        
        printf("Enter person's name: ");
        scanf("%s", persone[i].name);
        
        
        printf("\nEnter person's age: ");
        scanf("%d", &(persone[i].age));
         
        
        
        int gen_;
        printf("\nEnter person's gender: ");
        scanf("%d", &gen_);
        persone[i].gen = gen_;
        
        if (persone[i].age >= 18 && persone[i].gen == 0) printf("\nhere");
        
    }

    return 0;
}

