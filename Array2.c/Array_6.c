//function which accept vlaue from user with array
#include<stdio.h>
int n; //global var
void array_function(int arr[]){
    for(int i=0;i<n;i++){
    printf("\n%d",arr[i]);
}
}
void main(){
    printf("Enter size");
    scanf("%d",&n);
    int arry1[n];
    printf("Enter elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arry1[i]);
    }
    array_function(arry1);

}