#include <stdio.h>
struct array_structure
{
    int id;
    double d;
} s1[3];
void main()
{
    printf("Enter id and double data");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &s1[i].id);
        scanf("%lf", &s1[i].d);
    }
    printf("your elements");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%d\n%lf", s1[i].id, s1[i].d);
    }
}