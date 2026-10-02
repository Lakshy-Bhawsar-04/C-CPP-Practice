#include<stdio.h>

int arrayMin(int arr[] , int size){
    int min = 0;
    for(int i=0;i<size;i++){
        if(arr[i] < arr[min]){
            min = i;
        }
    }
    return min;
}

int main(){
    int arr[] = {34,43,44,2,45,13};
    int size = 6;
    int index = arrayMin(arr, size);

    printf("Min Element : %d" , arr[index]);
    printf("index %d " , index);

}