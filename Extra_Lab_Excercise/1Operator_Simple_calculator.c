//Simple calculator
#include <stdio.h>
int main()
{
    double num1, num2, result;
    char operator;
    //Input two numbers and an operator
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+,-,*,/ ,%%): ");
    scanf(" %c", &operator);
    printf("Enter second number:");
    scanf("%lf", &num2);
    //Perform calculation based on operator
    switch(operator)
    {
        case '+':
        result =num1 + num2;
        printf("result:%lf\n", result);
        break; 
        case '-' :
        result = num1 - num2;
        printf("result:%lf\n", result);
        break;
        case '*' : 
        result = num1 * num2;
        printf("result:%lf\n", result);
        break; 
        case '/' :
        if (num2 != 0){
            result = num1 / num2;
            printf("result:%lf\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }break;
        default:
        printf("Error: Invalid operator.\n");
    }
}