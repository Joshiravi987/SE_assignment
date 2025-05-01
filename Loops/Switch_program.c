#include <stdio.h>
void main(){
    //calculator
    double a=20 , b=40;
    char ch='+';
    switch (ch)
    {
    case '+':
        printf("addition is %lf",(a+b));
        break;
        case '-':
        printf("division is %lf",(a-b));
        break;
        case '*':
        printf("multiplicat %lf",(a*b));
        break;
        case '/':
        printf("division is %lf",(a/b));
        break;
    
    
    default:
    printf("invalid input");
        break;
    }
}