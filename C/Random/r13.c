#include <stdio.h>
#include <ctype.h>
// char is uppercase output lowercase
// char is lowercase output uppercase
// process the character in a loop

int main(){
    char string[] = "nifty text \n";
    int ch ;
    int x= 0;

    while( (ch=string[x])!='\0'){
        if(isupper(ch))
            putchar(tolower(ch));
        else if (islower(ch))
            putchar(toupper(ch));
        else
            putchar(ch);
        x++;
    }


    
    return 0;
}