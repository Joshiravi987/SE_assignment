#include<stdio.h>
int main() {
    int i;

    // Using for loop
    printf("Numbers from 1 to 10 using for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    // Using while loop
    printf("\nNumbers from 1 to 10 using while loop:\n");
    i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }

    // Using do while loop
    printf("\nNumbers from 1 to 10 using do while loop:\n");
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}
