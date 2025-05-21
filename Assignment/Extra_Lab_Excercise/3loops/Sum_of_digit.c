// Write a C program that takes an integer from the user and calculates the sum of its digits using a while loop.
#include <stdio.h>
void main() {
    int num, sum = 0, digit, reverse = 0, original_num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    original_num = num;
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        digit = num % 10;
        sum += digit;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);

    // If original number was negative, make reversed number negative
    if (original_num < 0) {
        reverse = -reverse;
    }
    printf("Reversed number: %d\n", reverse);
}