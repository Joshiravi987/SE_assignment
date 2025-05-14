/*Write a C program that takes an integer input from the user and prints its multiplication
table using a for loop.*/
#include <stdio.h>
void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("Multiplication table of %d :\n", num);
    for (int i = 10; i >= 1; i--) // Loop from 10 to 1 for reverse order
    {
        printf("%d x %d = %d\n",num,i, num * i); // Print each line of the table
    }
}