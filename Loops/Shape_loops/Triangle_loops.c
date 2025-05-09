//Triangle loops
#include<stdio.h>
void main(){
    int n=6;//size of the triangle
    int counter = 2;//counter variable to print numbers
    printf("\ntriangle loop\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){//ensure inner loop iterates i times
            printf(" %d ",counter);//print the counter value
            counter++;//increment the counter after each print
        }
        printf("\n");//move to the next line after each row
    }
}