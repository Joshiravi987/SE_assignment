#include<stdio.h>
void main(){

    int a;
    float b;
    double c;
    char r;
    printf("enter double val");
    scanf("%lf",&c);
    printf("enter int value");
    scanf("%d",&a);
    
    printf("enter the string");
    r=getchar();
    scanf("%c",&r);
    printf("enter float value");
    scanf("%f",&b);
   
    printf("your int val is %d",a);
    printf("\nyour float value is %f",b);
    printf("\nyour double value is %lf",c);
    printf("\nyour character is %c",r);
}