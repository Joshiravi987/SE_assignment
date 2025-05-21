/*Write a C program that accepts 10 integers from the user and stores them in an array. The
program should then find and print the maximum and minimum values in the array.*/
#include <stdio.h>
int main()
{
    int arr[10],i,max,min;
    printf("Ennter 10 integrs: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
// initializing max and min with the first element of the array
max=arr[0];
min=arr[0];
// finding max and min
for (i = 1; i < 10; i++)
{
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
}