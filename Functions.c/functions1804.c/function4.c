//function with param and with return type
#include<stdio.h>
int test(int num1,int num2){
    return num1+num2;
}
void main()
{
int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
int ans = test(a,b);
printf("%d",ans);
}
//create function who return max value from 1 to 10