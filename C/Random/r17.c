#include <stdio.h>
#include <stdlib.h>

// trying to use malloc
// prints ascii 0 to 128

int main(){
    int *buffer; // gives a pointer of char
    buffer = (int*) malloc( sizeof(int) * 128 ); // gives an 128 bytes

    for(int i = 0; i<128; i++){
        buffer[i] = i;
        printf("%c ",buffer[i]);
    }
    printf("\n");

    return 0;

}