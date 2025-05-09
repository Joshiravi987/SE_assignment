//how to create newe file in c
#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C PROGRAM\\Basic\\newfile.txt", "w");
    //add content to file
    int i;
    printf("Enter file data");
    scanf("%d", &i);
    fprintf(fptr, "%d", i);
    fclose(fptr);

}