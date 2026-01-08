#include <stdio.h>

// program for implementing basic function
void line(void)
{
    int hypens = 40;
    while(hypens>=0)
    {
        printf("-");
        hypens--;
    }
    printf("\n");



}

int main()

{
    puts ("How to fight off a robot attack!");
    line();
    puts ("A survival guide for the 21st century!");
    line();
    return (0);
}