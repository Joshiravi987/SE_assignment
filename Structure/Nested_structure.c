#include <stdio.h>
struct student
{
    int id;
    double d;
} s1;
struct Address
{
    char *city;
    struct student stu;
} s2;
void main()
{
    s2.stu.id = 123;
    s2.stu.d = 12.949851;
    printf("\n%d", s2.stu.id);
    printf("\n%lf", s2.stu.d);
    s2.city = "Vadodara";
    printf("\n%s", s2.city);
};
