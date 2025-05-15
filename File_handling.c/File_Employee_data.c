//create file who takes employees data and store in file
//Employee name
//Employee id
//Employee salary
//Employee joining date 12/12/2023
#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("C:\\Users\\Mehta\\OneDrive\\Desktop\\C_assignment\\employee.txt", "w");
char name[20];
int id;
float salary;
char date[20];
printf("Empyloyee name :");
scanf("%s", name);
printf("Empyloyee id :");
scanf("%d", &id);
printf("Empyloyee salary :");
scanf("%f", &salary);
printf("Empyloyee joining date :");
scanf("%s", date);
fprintf(fptr, "Employee name : %s\n", name);
fprintf(fptr, "Employee id : %d\n", id);
fprintf(fptr, "Employee salary : %f\n", salary);
fprintf(fptr, "Employee joining date : %s\n", date);
fclose(fptr);
}