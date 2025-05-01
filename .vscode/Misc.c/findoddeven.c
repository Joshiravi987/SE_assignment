// #include<stdio.h>
// void main(){
//     for(int i=1;i<=10;i++){
//         printf("%d is ",i);
//         if (i %2 == 0){
//             printf("even\n");
//         }else{printf("odd\n");
// }
// }
// }

// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=0;i<=20;i=i+2)
//     {

//         printf("\n%d",i);
//     }
// }

#include<stdio.h>
void main()
{
    int number;
    printf("enter number :");
    scanf("%d",&number);
    if (number%2==0)    
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}