//make odd even program using switch case
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2){
        case 0:
            printf("%d is even",n);
            break;
        case 1:
            printf("%d is odd",n);
            break;
        default:
            printf("Invalid input");
    }
    return 0;
}