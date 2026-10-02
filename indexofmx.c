/*
  WAP to find the index of max element.

  {34,43,44,2,45,13}

*/

#include<stdio.h>

int arrayMax(int arr[] , int size){
    int max = 0;
    for(int i=0; i<size;i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;
}
int main(){

    int arr[] = {34,43,44,2,45,13};
    int size = 6;

    int index = arrayMax(arr , size);
    // printf("max element :  %d index = %d\n" ,arr[index] , index);

    printf("Max element : %d\n" , arr[index]);
    printf("Index %d" , index);

}