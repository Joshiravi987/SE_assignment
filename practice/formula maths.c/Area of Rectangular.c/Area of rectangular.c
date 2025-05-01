#include<stdio.h>
int main(){
    double length,width,Area;
    printf("Enter the length of rectangular\n");
    scanf("%lf",&length);
    printf("Enter the width of rectangular\n");
    scanf("%lf",&width);
    Area = length*width;
    printf("Area of Rectangular is %lf\n",Area );
return 0;
}