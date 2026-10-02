#include<stdio.h>

int LinearSearch(int arr[] , int size , int Element){
    for(int i=0;i<size;i++){
        if(arr[i] ==Element){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {22,3,4,5,65,3,236};
    int size = sizeof(arr) / sizeof(arr[0]);
    // int size = 7;
    int Element = 65;

    int searchindex = LinearSearch(arr , size , Element);

    printf("Element %d found at index %d" , Element , searchindex );
}