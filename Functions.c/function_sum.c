// //function with no param with return type
// #include<stdio.h>
// void test(int num1, int num2)
// {
//     printf("%d",(num1+num2));
// }
// void main(){
//     int a,b;
//     printf("Enter two value");
//     scanf("%d%d",&a,&b);
//     test(a,b);
// }

#include<stdio.h>
int sum(int a, int b)
{
    return a + b;
}
void main()
{
    sum(50,80);
    printf("Sum is %d", sum(50, 80));
}