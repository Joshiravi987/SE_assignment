// find the length of a string
#include <stdio.h>
#include <string.h>
void main()
{
    char c1[10] = "hello test word";
    char c2[10] = "test";
    char c3[10];
    printf("Length of string c1 is %d\n", strlen(c1));

    //     //concat strings
    //     strcat(c1,c2);
    //     printf("Concatenated string is %s\n",c1);

    //     //copy string
    //     strcpy(c3,c1);
    //     printf("Copied string is %s\n",c3);

    //     //compare strings
    //    if(strcmp(c1,c2)==0){
    //         printf("String is same\n");
    //    }
    //     else{
    //         printf("not same\n");
    //     }
    //     //covert string to upper case
    //     printf("\n%s",strupr(c1));
    //     //convert string to lower case
    //     printf("\n%s",strlwr(c1));
    //     //copy perticular string
    //     strncpy(c1,c2,3);
    //     printf("\n%s",c1);

    // find the first occurance of a character
    //char *chr = strchr(c1, 'e');
    //printf("\nFirst occurance of e is %d", chr - c1);
    // find the last occurance of a character
    char *chr = strrchr(c1, 'l');
    printf("\nLast occurance of l is %d", chr - c1);
    // strrchr
    char *ch = strstr(c1, "test");
    if (ch != NULL)
    {
         printf("\n pre");
    }
    else
    {
        printf("\n nNp");
    }

    // int value transform/format into string
    int i = 10;
    char str[10];
    sprintf(str, "%d", i);
    printf("\nInt value to string is %s", str);
}