#include<stdio.h>

int main() {
    char ch[6]; // Array can hold 4 characters + null terminator
    printf("Enter Your Name: ");
    scanf("%5s", ch); // Limit input to 4 characters to avoid overflow
    printf("Your Name is: %s\n", ch); // Added newline for clean output
    return 0;
}