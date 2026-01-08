#include <stdio.h>
#include <string.h>



struct birthday{
        float height;
        int day;
        int month;
        int year;
        char name[64];

    } ;
int main(){
    struct birthday person1;

    person1.height = 160.2f;
    person1.day = 5;
    person1.month = 6;
    person1.year = 2006;
    strcpy(person1.name, "name");
    
    printf("Name: %s\nDOB: %02d/%02d/%d\nHeight: %.2fm\n",
           person1.name, person1.day, person1.month, person1.year, person1.height);


    return 0;
}
