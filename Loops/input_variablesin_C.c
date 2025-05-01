#include<stdio.h>

void main() {
    int a;
    float b;
    double c;
    char d;
    char str[10]; // Ensure the size matches the input limit

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a double: ");
    scanf("%lf", &c);

    printf("Enter a character: ");
    scanf(" %c", &d); // Space before %c to handle newline character

    printf("Enter a string: ");
    scanf("%9s", str); // Limit input to avoid buffer overflow

    printf("Integer is %d", a);
    printf("\nFloat is %f", b);
    printf("\nDouble is %lf", c);
    printf("\nCharacter is %c", d);
    printf("\nString is %s", str);
    printf("\n"); // Add newline for clean output
}