#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d" , &n);

    if(n>0){
        printf("Positive Number");

    }
    else if(n<0){
        printf("Negative number");
    }
    
    else{
        printf("zero number");
    }
}