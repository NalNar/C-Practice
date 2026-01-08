#include <stdio.h>

int main()
{

    float highscore [5] =
    {1.1, 1.0, 2.3 , 2.1, 22.2};
    // sizeof function returns the value that is occupying in the memory for that datatype
    int length = sizeof(highscore)/sizeof(highscore[0]);



    for(int i = 0; i<(length); i++){
        printf("%f\n ", highscore[i]);
    }


    return 0;
}