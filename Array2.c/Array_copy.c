#include<stdio.h>
//Copy the Array
int main()
{
    int arr[10],arr1[10];
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    // Copying array
    for(int i=0;i<5;i++)
    {
        arr1[i]=arr[i];
    }
    // Print copied array
   for(int i=0;i<5;i++){
     printf("\n%d",arr1[i]);
   }
   return 0;
    }
