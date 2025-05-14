#include <stdio.h>
void main(){
    //create array using one by one
    int arr[5];
    arr[0]=12;
    arr[1]=13;
    arr[2]=14;
    arr[3]=810;
    arr[4]=15;

    // Display one-dimensional array elements with better formatting
    printf("\nOne-dimensional array elements:\n");
    for(int i=0; i<5; i++) {
        printf("Element %d: %d\n", i+1, arr[i]);
    }

    //Two dimensional array with 3x3 matrix
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    // Display 2D array elements with better formatting
    printf("\nTwo-dimensional array (3x3 matrix):\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    int sum=0;  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr2[i][j];
        }
    }

    // Display sum of all elements in the 2D array
    printf("\nSum of all elements in the 2D array: %d\n", sum);
}