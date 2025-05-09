#include<stdio.h>

void main() {
    int a;
    float b;
    double c;
    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a double: ");
    scanf("%lf", &c);

    printf("Integer is %d", a);
    printf("\nFloat is %f", b);
    printf("\nDouble is %lf", c);
    printf("\n"); // Add newline for clean output
}