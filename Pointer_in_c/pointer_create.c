#include<stdio.h>
void main(){
    int i= 10;
    int *ptr;
    ptr = &i; // Pointer hold value of  int i value
    printf("\nAddress of i is%p\n", *ptr); // poininter variable address
    printf("address of i is%p\n", &i); // int variable address
    printf("value of i is %d\n",*ptr); // variable value
}