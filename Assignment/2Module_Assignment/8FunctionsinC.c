#include<stdio.h>
int factorial()
{
   int fact=1;
   for(int i=1;i<=10;i++)
    {
       fact=fact*i ;
    }
     return fact;
}
    void main()
    {   
    int ans=factorial();
    printf("Factorial is %d\n",ans);
}
