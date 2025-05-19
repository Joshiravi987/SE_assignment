//pointer multiplication 
#include<stdio.h>
int multiplication(int *a, int *b)
{
    int multiply= *a * *b;
    return multiply;
}   
void main()
{
    int a=10, b=20;
    int multiply = multiplication(&a, &b);
    printf("multiplicagtion is %d", multiply);
}
