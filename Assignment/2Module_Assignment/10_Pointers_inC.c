/*Write a C program to demonstrate pointer usage. Use a pointer to modify the
value of a variable and print the result.
*/
#include <stdio.h>
void main(){
    int num = 5;
    int *ptr = &num; // Pointer to the variable num
    printf("Before modification:\n");
    printf("Original value of num: %d\n", num);
    *ptr =22; // Modifying the value of num using the pointer
    printf("After modification:\n");
    printf("Modified value of num: %d\n", num);
}