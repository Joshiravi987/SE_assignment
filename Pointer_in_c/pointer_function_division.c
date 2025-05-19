//divison of pointer using function
#include<stdio.h>
double division(double *a, double *b)
{
    double divide = *a / *b;
    return divide;
}
int main()
{
    double a = 10, b = 20;
    double divide = division(&a, &b);
    printf("division is %lf", divide);
    return 0;
}