#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter size fo array: ");
    scanf("%d", &n);
    int *ptr;
    //allocate run time memory to the pointer
    ptr = (int*)malloc(n*sizeof(int));
    printf("Enter %d elements: ", n);
    for (int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf("\n%d ", ptr[i]);
    }
    //free the allocated memory
    free(ptr);
}