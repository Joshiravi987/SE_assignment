/*Write a C program that defines a structure to store a student's details (name,
roll number, and marks). Use an array of structures to store details of 3
students and print them.*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_number;
    float marks;
};

int main() {
    int ;
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s\tRoll Number: %d\tMarks: %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }
    return 0;
}