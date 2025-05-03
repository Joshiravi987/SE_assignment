#include<stdio.h>
#include<string.h>
struct Student
{
int id;
double d;
char *c;
char c1[10];

};
void main()
{
    struct Student  s1;
    struct Student  s2;
    s1.id=15;
    s1.d=5.53;
s2.id=25;
s2.d=7.77;
s1.c="test";
s2.c="test2";
strcpy(s1.c1,"hello");
strcpy(s2.c1,"hello world");
printf("\nid is %d \n%d \n%s \n%s",s1.id,s2.id,s1.c,s1.c1);
printf("\ndouble data is %lf \n%lf \n%s \n%s",s1.d,s2.d,s2.c,s2.c1);
}