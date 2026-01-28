/*  Find the maximum of three integers
    Write a C program that accepts three integers
    and finds the maximum of three.
 */

 #include <stdio.h>


int max(int number1, int number2, int number3)
{
    int output;

    //  if statements for comparing
    if(number3 > number2 && number3 > number1 ){
        return number3;
    } else if (number2 > number3 && number2 > number1){
        return number2;        
    } else {
        return number1;
    }

    return output;
}


 int main()
 {
    // variables
    int num1, num2, num3;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%i %i %i", &num1, &num2, &num3);

    // scanf("%f", );
    printf("%i",max(num1,num2,num3));

    return 0;
 }