#include<stdio.h>
int main(){

        int a , b;
        int *p1 = &a;
        int *p2 = &b;

    printf("Enter 1st number :");
    scanf("%d" , &a);

    printf("Enter 1st number :");
    scanf("%d" , &b);

    printf("sum = %d" , *p1 + *p2);
}