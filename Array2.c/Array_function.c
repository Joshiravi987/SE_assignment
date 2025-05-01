#include<stdio.h>
int n=7;//global variable
void array_function(int arr[]){
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
void main()
{
    int arry1[]={23,45,34,56,67,56,54};
    array_function(arry1);
}