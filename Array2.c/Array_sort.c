//bubble sort algorithm
//sorting the array in descending order
#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    //create Array
    int arr[size];
    printf("Enter the value of array: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    //Print the array
    for(int i=0;i<size;i++){
        printf("The input value is %d ",arr[i]);
    }
    //bubble sort
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Print the sorted array
    for(int i=0;i<size;i++){
        printf("\n%d ",arr[i]);
    }
}