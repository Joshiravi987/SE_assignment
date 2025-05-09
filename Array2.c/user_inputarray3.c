//create array which take employee id and name value run time
#include<stdio.h>
void main()
{
    //user definded array
    int size;
    printf("enter array size");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i <size ; i++)
    {
        printf("Enter array elements");
        scanf("%d",&arr[i]);
    }
   //data display
   for(int i=0;i<size;i++){
    printf("\n%d",arr[i]);
   } 
}