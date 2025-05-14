#include <stdio.h>
//ladder if else
void main()
{
    int a;
    printf("Enter the number of days in a month: ");
    scanf("%d", &a);
    if (a == 1)
        printf("January has 31 days");
    else if (a == 2)
        printf("February has 28 days");
    else if (a == 3)
        printf("March has 31 days");
    else if (a == 4)
        printf("April has 30 days");
    else if (a == 5)
        printf("May has 31 days");
    else if (a == 6)
        printf("June has 30 days");
    else if (a == 7)
        printf("July has 31 days");
    else if (a == 8)
        printf("August has 31 days");
    else if (a == 9)
        printf("September has 30 days");
    else if (a == 10)
        printf("October has 31 days");
    else if (a == 11)
        printf("November has 30 days");
    else if (a == 12)
        printf("December has 31 days");
    else
        printf("Invalid month number");
}