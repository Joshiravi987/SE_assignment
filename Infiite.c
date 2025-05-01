#include<stdio.h>

void main() {
    int n = 5; // Size of the square
    printf("\nSquare loop\n");
    for (int i = 1; i <= n; i++) {   
        for (int j = 1; j <= n; j++) { // Ensure both loops iterate `n` times
            printf(" * ");
        }
        printf("\n"); // Move to the next line after each row
    }
}