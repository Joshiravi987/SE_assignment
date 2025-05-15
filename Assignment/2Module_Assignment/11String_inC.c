/*Write a C program that takes two strings from the user and concatenates them
using strcat(). Display the concatenated string and its length using
strlen().*/
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strcat(str1, str2); // Concatenate str2 to str1
    printf("Concatenated string: %s\n", str1);
    printf("Length of concatenated string : %d\n", strlen(str1));
}