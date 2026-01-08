#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

struct person{
    char name [SIZE];
    int id;
};


struct person fill(void){
    // prompt input fill name and id of a person struct
    // returns struct
    struct person p1;

    printf("Write the full name: ");
    fgets(p1.name, SIZE, stdin);
    
    printf("Write the full id: ");
    scanf("%d", &p1.id);

    return p1;
}

void output(struct person y){
    // 
    printf("\n ----- The person details -----\n");
    printf("Name: %s",y.name);
    printf("ID: %d\n", y.id);

}


int main(){
    struct person you;

    you = fill();

    output(you);

    return 0;

}