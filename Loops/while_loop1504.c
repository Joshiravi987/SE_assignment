#include <stdio.h>
int main(){
    //while loop program
    int pwd;
    //pwd is pwd
    while (1) {
        printf("enter password");
        scanf("%d",&pwd);
        if (pwd==123){
            printf("welcome");
            break;
        }
        else{
            printf("renter password");
        }
        return 0;
        }
        }