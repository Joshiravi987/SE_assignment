#include<stdio.h>
void main(){
    int x , y , sum , minus , multiply , division ;
    printf("\nFirst interger : ");
    scanf("%d",&x);
    printf("\nSecond integer :");
    scanf("%d",&y);
    sum = x + y ;
    printf("\nSum of two integers = %d\n",sum);
    minus=x-y;
    printf("\nSubstraction of two integers = %d\n",minus);
    multiply=x*y;
    printf("\nmultiplication of two integers = %d\n",multiply);
    division=x/y;
    printf("\ndivision of two integers = %d\n",division);
}