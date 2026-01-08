#include <stdio.h>

/*
    simple recursion program
*/

int factorial(int f)
{
    if(f==1)
        return(f);
    return(f*factorial(f-1));
}

void recurse(int a)
{
    a++;
    if(a>10)
        return;
    printf("%d\n",a);
    recurse(a);
}

int main()
{
    recurse(0);
    printf("the value of the factorial 4 is %d\n",factorial(4));

    return 0;
}