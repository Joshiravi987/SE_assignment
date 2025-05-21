//Implement a simple calculator using switch.
#include <stdio.h>
int main()
{
    char operator;
    double num1,num2,reasult;
    printf("Enter an operator (+,-,*,/): ");
    scanf(" %c",&operator); // Added space before %c to consume any leftover newline
    printf("Enter two operands: ");
    scanf("%lf %lf",&num1,&num2);
    switch(operator)
    {
        case '+':
            reasult = num1 + num2;
            printf("%.1lf + %.1lf = %.1lf",num1,num2,reasult);
            break;
        case '-':
            reasult = num1 - num2;
            printf("%.1lf - %.1lf = %.1lf",num1,num2,reasult);
            break;
        case '*':
            reasult = num1 * num2;
            printf("%.1lf * %.1lf = %.1lf",num1,num2,reasult);
            break;
        case '/':
            if(num2 != 0)
            {
                reasult = num1 / num2;
                printf("%.1lf / %.1lf = %.1lf",num1,num2,reasult);
            }
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! operator is not correct");
            break;
}
}