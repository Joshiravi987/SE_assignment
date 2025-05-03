#include <stdio.h>
void main(){
    printf("Skip 3 using continue ,Stop at 5 using break : \n");
    int i;
    for(i=1;i<=10;i++){
        if(i==5){
        break;
    }
    if(i==3){
        continue;
    }
    printf("%d\n",i);
}    
}