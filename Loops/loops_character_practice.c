#include<stdio.h>
void main(){
    for(int i=1;i<=6;i++){
        for (int j=5;j>=i;j--){
            printf(" 5 ");
        }
        printf( "\n");
    }
for (int i=1;i<=6;i++){
    for (int j=2;j<i;j++){
        printf(" 4 ");
    }
    printf("\n");
}
for(int i=0;i<=6;i++){
    for (int j=0;j<=i;j++){
        printf(" 5 ");
    }
    printf(" \n ");
}
}