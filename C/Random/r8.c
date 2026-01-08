#include <stdio.h>

// simple program representing arrays

int main(){
    int age[5] = {20,10,12,22,20};
    int length = sizeof(age)/sizeof(age[0]);

    for(int i =0; i<length;i++){
        printf("The person %d is %d years old ", i+1, age[i]);
        printf("\n");
    }

}