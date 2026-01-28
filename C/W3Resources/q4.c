#include <stdio.h>

/*
Write a C program that reads an integer between 1 and 12 and prints the month of the year in English.
Test Data :
Input a number between 1 to 12 to get the month name: 8
Expected Output:
August
*/

int main()
{
    int month;
    printf("Enter your month " );
    scanf("%i", &month);

    switch (month)
    {
        case 1:
            printf("%s", "January");
            break;
        case 2:
            printf("%s", "February");
            break;
        case 3:
            printf("%s", "March");
            break;
        case 4:
            printf("%s", "April");
            break;
        case 5:
            printf("%s", "May");
            break;
        case 6:
            printf("%s", "June");
            break;
        case 7:
            printf("%s", "July");
            break;
        case 8:
            printf("%s", "August");
            break;
        case 9:
            printf("%s", "September");
            break;
        case 10:
            printf("%s", "October");
            break;
        case 11:
            printf("%s", "November");
            break;
        case 12:
            printf("%s", "December");
            break;


    }


    return 0;
}