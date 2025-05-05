#include<stdio.h>
struct Structure_member
{
    int id;
    double d;
}s1,s2;
int main(){
    printf("Enter id and Double value for s1\n");
    scanf("%d",&s1.id);
    scanf("%lf",&s1.d);
    printf("\n%d\n%lf",s1.id,s1.d);
    printf("\nEnter id and Double value for s2\n");
    scanf("%d",&s2.id);
    scanf("%lf",&s2.d);
    printf("\n%d\n%lf",s2.id,s2.d);
    return 0;
}