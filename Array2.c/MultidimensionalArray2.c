#include<stdio.h>
void main()
{
    //make user define function to create array
    //create Array of 2D
    int x,y;
    printf("Enter the x: ");
    scanf("%d",&x);
    printf("Enter the y: "); 
    scanf("%d",&y);
    int arr[x][y];
    //display the array 
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("Enter the value of arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //display the array
    for(int i=0;i<x;i++){
        //nestet for loop to display the array
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}