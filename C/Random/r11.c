#include <stdio.h>

struct pixel{
    int horz;
    int vert;
    char color;
};

int main(){
    struct pixel p = {10,10,'Y'};
    printf("x = %d, y = %d, color = %c\n", p.horz, p.vert, p.color);

    return 0;

}