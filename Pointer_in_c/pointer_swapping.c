//swapping of two numbers using pointers using function
#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a = 10, b=20;
    printf("Before swapping a=%d b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter swapping a=%d b=%d", a,b);
}