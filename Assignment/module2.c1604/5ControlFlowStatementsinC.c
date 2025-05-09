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
    int number,month;;
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
    printf("\nMonth no : ");
    scanf("%d",&month);
    switch (month)
{
case 1:
   printf("\nJanuary"); 
    break;
    case 2:
    printf("\nFebary");
    break;
    case 3:
    printf("\nMarch");
    break;case 4:
    printf("\nApril");
    break;case 5:
    /* code */
    printf("\nMay");
    break;case 6:
    /* code */
    printf("\nJune");
    break;case 7:
    /* code */
    printf("\nJuly");
    break;
    case 8:
    /* code */
    printf("\nAug");
    break;case 9:
    /* code */
    printf("\nSep");
    break;case 10:
    /* code */
    printf("\nOct");
    break;case 11:
    /* code */
    printf("\nNov");
    break;case 12:
    /* code */
    printf("\nDec");
    break;
    default:
    printf("Invalid month\n Please try again...\n");
    break;
}
}