#include <stdio.h>
int main(){

    char ca = 'A';
    char* p = &ca;

    printf("%p %p\n", p, &ca);
}