//Create fun which give output of max value from 1 to 10
#include<stdio.h>
int max_num(){
    int max=0;
    for(int i=0;i<=100;i++){
    if (i>max)
    {max=i;
    }
    }
    return max;
}
void main(){
    int ans=max_num();
    printf("%d",ans);
}
