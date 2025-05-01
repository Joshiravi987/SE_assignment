#include<stdio.h>
void main(){
    double ans,Base,height;
    printf("Enter Base");
    scanf("%lf",&Base);
    printf("Enter height");
    scanf("%lf",&height);
    ans=Base*height*0.5;
    printf("\nAnswer is %lf",ans);
}