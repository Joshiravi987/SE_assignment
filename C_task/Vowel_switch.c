//vowel or consenant switch
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);

    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel\n", ch);
            break;
        default:
            printf("%c is a consonant\n", ch);
    }
}