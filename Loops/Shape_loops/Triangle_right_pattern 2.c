#include<stdio.h>
void main(){
    int counter = 1;//counter variable to print numbers
    for(int i=0;i<=5;i++){
        for(int j=5;j>=i;j--){
            printf (" %d ",counter);//print the counter value
           
        }
        counter++;//increment the counter after each print
        //make new line
        printf("\n");
    }
}