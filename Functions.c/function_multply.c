#include<stdio.h>
int multiply(int x, int y,int z) {  
    return x * y *z;
}

void main() {
    int x, y, z;
printf("Enter three numbers: \n");
    scanf("%d%d%d", &x, &y, &z);
    int result = multiply(x, y, z);
    printf("product = %d\n", result);

}
