#include <stdio.h>
void main()
{
    int arr[10],even[10],odd[10];
    int even_count=0,odd_count=0;
    printf("Enter the numbers:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
  for(int i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            even[even_count]=arr[i];
            even_count++;
        }
        else
        {
            odd[odd_count]=arr[i];
            odd_count++;
        }
    }
    // Print even and odd numbers
   for(int i=0;i<even_count;i++){
    printf("\neven numbers are : %d",even[i]);
}
for(int i=0;i<odd_count;i++){
     printf("\nodd numbers are : %d",odd[i]);
}
}