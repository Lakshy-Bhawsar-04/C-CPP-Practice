/*
      WAP to calulate the sum of given array.

      {10, 12, 11 ,33, 4}

      arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
*/  

#include<stdio.h>

int arraySum(int arr[] , int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];    // sum = sum + arr[i]
    }

    return sum;
}
int main(){
    int arr[] = {10,12,11,33,4};
    int size = 5;

    int sum = arraySum(arr,size);

    printf("sum : %d" , sum);
}