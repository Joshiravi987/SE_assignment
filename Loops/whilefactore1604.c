#include<stdio.h>
void main(){
    int num=200,count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
            printf("factor\n%d",i);
        }
    }
    printf("\ntotal factor is %d",count);
    if(count>2){
        printf("\nnumber is not prime %d",num);
    }
    else
    {printf("\nnumber is prime %d",num);
    }
}