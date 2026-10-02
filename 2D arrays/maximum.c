#include<stdio.h>

int maximum(int arr[][3]){
    int max = arr[0][0];

    for(int i=0 ;i<3; i++){
        for(int j=0; j<3; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int arr[3][3] = {{1,5,3},{8,2,7},{4,9,6}};

    int max = maximum(arr);

    printf("Maximum %d", max);
    
}