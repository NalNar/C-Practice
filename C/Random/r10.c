#include <stdio.h>
#include <string.h>

struct date{
    int day;
    int month;
    int year;
};

struct person{
        float height;
        struct date birthday;
        char name[64];

    } ;
int main(){
    struct person person1;

    person1.height = 160.2f;
    person1.birthday.day = 5;
    person1.birthday.month = 6;
    person1.birthday.year = 2006;
    strcpy(person1.name, "name");
    
    printf("Name: %s\nDOB: %02d/%02d/%d\nHeight: %.2fm\n",
           person1.name, person1.birthday.day, person1.birthday.month, person1.birthday.year, person1.height);


    return 0;
}
