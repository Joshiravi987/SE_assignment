//use gets to take string input for user
#include <stdio.h>
#include <string.h>
void main()
{
    char c[100];
    printf("Enter a string: ");
    gets(c); // Using gets to read a string
    printf("You entered: %s\n", c);
}
