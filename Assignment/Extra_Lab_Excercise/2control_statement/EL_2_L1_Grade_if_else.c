#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        return 1; // Exit the program with an error code
    }
    // Using if-else to determine the grade based on marks
    if (marks >90) {
        grade = 'A';
    } else if (marks >75 && marks <=90) {
        grade = 'B';
    } else if (marks >50 && marks <=75) {
        grade = 'C';
    } else if (marks <=50) {
        grade = 'D';
    }
    printf("Your grade is %c\n", grade);
}
