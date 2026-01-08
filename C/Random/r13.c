#include <stdio.h>
// char is uppercase output lowercase
// char is lowercase output uppercase
// process the character in a loop

int main(){
    char c;
    for(int i =0;i<10;i++){
        printf("Enter the character: ");
        scanf("%c", &c);

        if(c>='A' && c<='Z'){
            c+=32;
        } else if(c >= 'a' && c <= 'z'){
            c-=32;
        }
        printf("Converted character: %c\n\n", c);
    }
    return 0;
}
