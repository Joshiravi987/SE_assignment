/*Number properties  Write a C program that takes an integer from the user and checks the following using
different operators:
o Whether the number is even or odd.
o Whether the number is positive, negative, orzero.
o Whether the number is a multiple of both 3 and 5.*/
#include <stdio.h>
void main()
{
double a;
printf("enter the number\n");   
scanf("%lf",&a);
if ((int)a != a) {
    printf("Please enter a valid integer.\n");
    return;
}

int num = (int)a;

// Check if the number is even or odd
if (num % 2 == 0)
    printf("The number is even.\n");
else
    printf("The number is odd.\n");

// Check if the number is positive, negative, or zero
if (num > 0)
    printf("The number is positive.\n");
else if (num < 0)
    printf("The number is negative.\n");
else
    printf("The number is zero.\n");

// Check if the number is a multiple of both 3 and 5
if (num % 3 == 0 && num % 5 == 0)
    printf("The number is a multiple of both 3 and 5.\n");
else
    printf("The number is not a multiple of both 3 and 5.\n");
}