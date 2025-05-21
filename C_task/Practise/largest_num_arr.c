//Find largest/smallest number in an array.
#include <stdio.h>
int main() {
    int n, i, largest, smallest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    smallest = arr[0];
    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("Largest element in the array: %d\n", largest);
    printf("Smallest element in the array: %d\n", smallest);
    
    return 0;
}