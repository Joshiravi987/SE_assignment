//Create employee data with id,name,department, and salary,take input from user and print the data use structure as function signature 
#include <stdio.h>
//function define
struct employee getinfo();
struct employee
{
    int id;
    char name[20];
    char department[20];
    float salary;
};
void main()
{
    struct employee e;
    e=getinfo();
    printf("Employee detail is :ID%d NAME\n%s \n%s \n%f", e.id, e.name, e.department, e.salary);
};
struct employee getinfo()
{
    struct employee emp;
    printf("Enter ID, Name, Department, and Salary: ");
    scanf("%d %s %s %f", &emp.id, emp.name, emp.department, &emp.salary);
    return emp;
}
