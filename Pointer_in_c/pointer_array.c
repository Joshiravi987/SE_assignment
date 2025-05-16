#include<stdio.h>
void main() {
    int arr[]={1,2,3,4,5};
    int *ptr;
    ptr = arr; // Pointer hold value of  int i value
    for(int i=0; i<5; i++){
        // printf("\narr value: %d", ptr[i]); // Print array value represented by pointer
        // printf("\nValue at ptr: %d", i, *(ptr + i)); // Print value using pointer
        printf("\n%p",&ptr[i]); // Print address of each element in the array
    }
    printf("\nfind address of arr%p", &ptr[0]); // Print address of first element in the array
}