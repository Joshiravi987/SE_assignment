//Square loop
#include<stdio.h>
void main()
{
int n=5;//size of the square
int counter=1;//counter variable to print numbers
int sum=0;//sum variable to store the sum of numbers
printf("\nSquare loop\n");
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){//ensure both loops iterate n times
        printf("%3d",counter);
        sum+=counter;//add the current number to the sum
        counter++;//increment the counter after each print
    }
    printf("\n");//move to the next line after each row
}
printf("\nSum of numbers in the square: %d\n", sum); // Print the sum of numbers in the square
}