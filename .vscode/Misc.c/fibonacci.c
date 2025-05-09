#include<stdio.h>
void main(){
int a=2,b=3;
for(int i=1;i<=10;i++){
    int c=a+b;
    printf(" %d",c);
    a=b;
    b=c;
}
}