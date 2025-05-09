//User input two array and make it ascending order or descending order as per user choice  
#include<stdio.h>
void main()
{
    int i, j, n, temp, choice;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Choose sorting order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
    
    // Sorting logic
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if((choice == 1 && arr[j] > arr[j + 1]) || (choice == 2 && arr[j] < arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // Display sorted array
    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}