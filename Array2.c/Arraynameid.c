//create array which take employee id and name value run time
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    int id[n];
    char name[n][20];
    for(i=0;i<n;i++)
    {
        printf("Enter employee id: ");
        scanf("%d",&id[i]);
        printf("Enter employee name: ");
        scanf("%s",name[i]);
    }
    printf("\nEmployee ID\tEmployee Name\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\n",id[i],name[i]);
    }
}