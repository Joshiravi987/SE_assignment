#include<stdio.h>
void main(){
    int a=120,b=60,c=30;
    if(a>=b && a>=c){
        printf("a is maximum %d",a);
    }
    else if(b>=a && b>=c){
        printf(" b is max %d",b);
    }
    else
    {
        printf("c is  max %d",c);
    }
  
}