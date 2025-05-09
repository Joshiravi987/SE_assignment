//sorting the array in reverse order
#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    //create Array
    int arr[size];
    printf("Enter the value of elemts: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //Reverse array
    for(int i=size-1;i>=0;i--){
        printf(" \n%d ",arr[i]);
    }

}