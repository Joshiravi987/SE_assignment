#include<stdio.h>
int factorial(int n)
{
   int fact=1;
   for(int i=1;i<=n;i++)
    {
       fact=fact*i ;
    }
     return fact;
}
    void main()
    {   
      int num;
      printf("Enter a number to find factorial: ");
      scanf("%d",&num);
    int ans=factorial(num);
    printf("Factorial is %d\n",ans);
}