#include<stdio.h>
int main(){
    int arr[4];

    printf("Enter a number : ");
    
     for(int i=0;i<4; i++){
        scanf("%d" , &arr[i]);
    }

     for(int i=0;i<4; i++){
        printf  ("%d " , arr[i]);
    }
    }