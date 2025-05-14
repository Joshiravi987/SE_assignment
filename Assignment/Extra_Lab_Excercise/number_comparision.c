//user input three numbers find kargest and smallest number
#include<stdio.h>
void main()
{
    double a,b,c;
    printf("Enter three numbers separated by spaces:\n");
    scanf("%lf %lf %lf", &a, &b, &c); // Removed extra space in scanf format

    double largest, smallest;

    // Find the largest number
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    // Find the smallest number
    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    // Display the results
    printf("Largest number is: %.2lf\n", largest);
    printf("Smallest number is: %.2lf\n", smallest);
}

