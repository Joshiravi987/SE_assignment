//Create fun which give output of min value from 1 to 10
#include<stdio.h>
int min_num(){
    int min=0;
    for(int i=0;i<=10;i++){
    if (i<min)
    {min=i;
    }
    }
    return min;
}
void main(){
    int ans=min_num();
    printf("%d",ans);
}