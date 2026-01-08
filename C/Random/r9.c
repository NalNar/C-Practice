#include <stdio.h>

// playing around struct (user defined datatype)

int main(){

struct pixel
{
    /* data */
    int horz;
    int vert;
    char color;

}center;

center.horz = 320;
center.color = 'r';
center.vert = 120;

printf("%d %c %d \n",center.horz, center.color, center.vert);


    return 0;
}
