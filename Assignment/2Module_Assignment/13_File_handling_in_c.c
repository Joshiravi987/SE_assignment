/*Write a C program to create a file, write a string into it, close the file, then
open the file again to read and display its contents*/
#include <stdio.h>

int main() {
    FILE *fp;
    char str[100] = "Hello, this is a file handling example in C program.";
    char fpter[100];

    // Create and write to the file
    fp = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C_assignment\\13File_handeling.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "%s", str);
    fclose(fp);

    // Open the file again to read its contents
    fp = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C_assignment\\13File_handeling.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    // Read and display the entire file content line by line
    printf("File contents: ");
    while (fgets(fpter, sizeof(fpter), fp) != NULL) {
        printf("%s", fpter);
    }
    fclose(fp);
    return 0;
}
