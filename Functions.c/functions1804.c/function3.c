//create function who swap value using function with param no return type
//a=10 b=20
//a=20 b=10

#include<stdio.h>
void test(int a,int b)
{
    
    int temp = a ;
    a=b;
    b=temp ;
    printf("a=%d,b=%d",a,b );
}
void main(){
test(10,20);
}