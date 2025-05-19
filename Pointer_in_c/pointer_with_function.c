#include<stdio.h>
int addition(int *a, int *b)
{
    int sum= *a + *b;
    return sum;
}   
void main()
{
    int a=10, b=20;
    int sum = addition(&a, &b);
    printf("sum is %d", sum);
}