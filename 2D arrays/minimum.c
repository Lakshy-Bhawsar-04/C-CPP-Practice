#include<stdio.h>

int minimum(int arr[][3]){
    int min = arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] < min){
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main(){
    int arr[3][3] = {{3,2,55,},{1,4,7},{11,6,9}};


    int min = minimum(arr);
    printf("Minimum %d", min);
}