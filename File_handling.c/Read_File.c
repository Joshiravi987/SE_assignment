#include<stdio.h>
void main(){
    FILE *fptr;
    fptr = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C PROGRAM\\Basic\\employee.txt", "r");
    if(fptr == NULL){
        printf("file doesnot exists\n");
    }
    char str[20];
    fscanf(fptr, "%s", &str);
    while(fscanf(fptr,"%s",str)!=EOF){
        printf("\n%s", str);
    }   
}
    /*using while loop to read file data
    char ch;
    while((ch = fgetc(fptr)) != EOF){
        printf("%c", ch);
    }*/