#include <stdio.h>

// have three var
// string 
// quantity output you have purchased xyz at $xyz for total abc

int main(){
    float price = 101.2;
    char item []= "Product";
    int quantity = 12;
    printf("you have purchased %s at $%0.2f\n for total %f \n", item,price,quantity*price);
    return 0;
}