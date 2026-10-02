#include<stdio.h>
int main(){
    int arr[5];
    int sum = 0;

    printf("Enter number : ");  
    for(int i=0;i<5;i++){
        scanf("%d" , &arr[i]);
    }
    for(int i =0 ;i<5; i++){
        sum = sum + arr[i];
    }

    printf("sum of %d" , sum);
}