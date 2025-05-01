#include<stdio.h>
void main()
{
    //user definded array
    int n;
    printf("enter array size");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n ; i++)
    {
        printf("Enter array elements");
        scanf("%d",&arr[i]);
    }
   //data display
   for(int i=0;i<n;i++){
    printf("\n%d",arr[i]);
   } 
}