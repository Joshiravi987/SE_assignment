//five subject result calculation using if-else
#include<stdio.h>
int main()
{
    int physics, chemistry, maths, english, computer,percentage;
    char result[20]; // Changed to char array to hold string
    // Input marks for each subject
printf("Enter marks in Physics: ");
    scanf("%d", &physics);
printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Enter marks in Maths: ");
    scanf("%d", &maths);
    printf("Enter marks in English: ");
    scanf("%d", &english);
    printf("Enter marks in Computer: ");
    scanf("%d", &computer);
    // Calculate total and percentage
    int total = physics + chemistry + maths + english + computer;
    percentage = total / 5;
    printf("Total marks: %d\n", total);
    printf("Percentage: %d\n", percentage);
    
    // Using if-else to determine the result based on marks
    if(percentage >75) {
    printf("distinction"); // Use printf to store string in char array
    } 

    else if (percentage >60 && percentage <=75) {
        printf("first class"); // Use printf to store string in char array
    } 
    else if (percentage >50 && percentage <=60) {
        printf("Second Class"); // Use printf to store string in char array
    } 
    else if (percentage >35 && percentage <=50) {
        printf("Pass"); // Use printf to store string in char array
    } 
    else if (percentage <=35) {
        printf("Fail"); // Use printf to store string in char array
    } 
    else {
        printf("Invalid marks. Please enter a value between 0 and 100.\n");
        // Exit the program with an error code
    }
    return 0;
}