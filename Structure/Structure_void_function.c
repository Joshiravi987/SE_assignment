// make structure with no return type function
#include <stdio.h>
struct student
{
    int id;
    char name[20];
};
void display(struct student s1);
void main()
{
    struct student s1;
    s1.id = 18;
    display(s1);
}
void display(struct student s1)
{
    printf("%d", s1.id);
}