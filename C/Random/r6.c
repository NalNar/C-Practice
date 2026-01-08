/* simple program to perform basic arithmetic*/

#include <stdio.h>

void add(int a,int b);
void substract(int a, int b);
void multiply (int a, int b);
float divide (int a, int b);

int main()
{
    int a, b;

    printf("Enter the values, separated by a space ");
    scanf("%d", &a);
    scanf("%d", &b);

    add(a,b);
    substract(a,b);
    multiply(a,b);
    printf("%d / %d = %f\n",a,b,divide(a,b));

    return 0;
}

void add(int a,int b)
{
    printf("%d\n",a+b);
}
void substract(int a, int b)
{
    printf("%d \n",b-a);
}
void multiply (int a, int b)
{
    printf("%d\n",a*b);
}
float divide (int a, int b)
{
   return (a/b);
}