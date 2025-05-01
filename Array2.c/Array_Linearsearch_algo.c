#include<stdio.h>
int linearsearch(int arr[],int size,int element){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found 
}
void main(){
    int arr[]={1,46,3,45,7,65,79,65,9,0,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=2;  // Element to search for
    int i=linearsearch(arr,size,element);
    if(i!=-1){
        printf("Element found at index %d\n",i);
    }
    else{
        printf("Element not found\n");
    }
}
