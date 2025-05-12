//implementation of structure in function
#include <stdio.h>
//function define
struct student getinfo();
struct student
{
int id;
char name[20];
};
void main()
{struct student s;
    s=getinfo();
    printf("%d%s",s.id,s.name);
};
struct student getinfo()
{
    struct student st;
    printf(" Enter id and name : ");
    scanf("\n%d%s",&st.id,&st.name);
    return st;
}