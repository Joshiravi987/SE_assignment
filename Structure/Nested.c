//create nested structure and print the data
#include<stdio.h>
struct employee{
    int emp_id;
    char emp_name[20];
};
struct department{
    int dept_id;
    char dept_name[20];
    struct employee emp;
};
void main(){
    struct department dept;
    printf("Enter emp_id and emp_name: ");
    scanf("%d %s", &dept.emp.emp_id, &dept.emp.emp_name); // Fixed scanf syntax
    printf("Enter dept_id and dept_name: ");
    scanf("%d %s", &dept.dept_id, &dept.dept_name); // Fixed scanf syntax
    printf("\n%d\n%s",dept.emp.emp_id,dept.emp.emp_name);
    printf("\n%d\n%s",dept.dept_id,dept.dept_name);
}
