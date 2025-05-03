#include <stdio.h>
struct student
{
    int id;
    char *name;
};
void main(){
    struct student s1={123,"test"};
    struct student s2={456,"test2"};
    struct student s3={.id=789,.name="test3"};
    printf("s1 is %d \n%s ",s1.id,s1.name);
    printf("\ns2 is %d \n%s" ,s2.id,s2.name);
    printf("\ns3 is %d \n%s" ,s3.id,s3.name);
}
