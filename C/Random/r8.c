#include <stdio.h>

// simple program representing arrays

int main(){
    int num[5] = {20,10,12,22,20};
    int length = sizeof(num)/sizeof(num[0]);

    for(int i =0; i<length;i++){
        printf("The person %d is %d old ", i+1, num[i]);
        printf("\n");
    }

}