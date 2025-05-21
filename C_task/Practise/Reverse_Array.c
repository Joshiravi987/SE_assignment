//Reverse a array
#include <stdio.h>
int main(){
int array[5],i;
printf ("Enter 5 integers: ");
for (i=0;i<5;i++)
{
    scanf("%d",&array[i]);
}
printf ("entered array: ");
for (i=0;i<5;i++)
{
    printf ("%d ",array[i]);
}
printf ("\n");
//reverse array
printf ("reversed array: ");
for (i=4;i>=0;i--)
{
    printf ("%d ",array[i]);
}
return 0;
}