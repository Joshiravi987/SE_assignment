#include<stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks < 0 || marks > 100) {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }
    // Using switch-case to determine the grade based on marks

    switch (marks / 10) {  // Divide marks by 10 to group into ranges
        case 10:
        case 9:
            grade = 'A';
            break;
        case 8:
        case 7:
            grade = 'B';
            break;
        case 6:
        case 5:
            grade = 'C';
            break;
        default:
            grade = 'D';
            break;
    }

    printf("Your grade is %c\n", grade);
    // Using if-else to determine the grade based on marks
    return 0;
}

  