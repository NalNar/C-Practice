#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Program to get random word from char's
*/
// prototyping
char randchar(void);


int main()
{
    int a;
    srand( (unsigned)time(NULL));
    printf("Today's random word: ");
    for(a=0;a<7;a++)
    {
        putchar(randchar());
    }
    putchar('\n');
}

char randchar(void)
{
    char r;
    r=rand()%26;
    r+='A';
    return r;
}