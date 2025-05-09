//create array of numbers and store it in a file
#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C PROGRAM\\Basic\\n1f1.txt", "w");
    int i, n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in array : ", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        fprintf(fptr, "%d\n", arr[i]);
    }
    fclose(fptr);
    fptr = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C PROGRAM\\Basic\\employee.txt", "r");
}
