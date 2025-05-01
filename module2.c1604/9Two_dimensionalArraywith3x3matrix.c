#include <stdio.h>
void main(){
    //create array using one by one
    int arr[5];
    arr[0]=12;
    arr[1]=13;
    arr[2]=14;
    arr[3]=810;
    arr[4]=15;
    //display array
    for(int i=0;i<5;i++){
      printf("\n%d\n",arr[i]);
    }
    //Two dimensional array with 3x3 matrix
    int arr2[3][3]={{ 1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Sum Of All elements in 2D array is: ");
    int sum=0;  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr2[i][j];
        }
    }
    printf("%d",sum);       
    printf("\n");
}