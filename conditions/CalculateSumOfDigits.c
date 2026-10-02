#include<stdio.h>
int main(){
    int num , sum=0;
    printf("Enter a numeber :");
    scanf("%d" , &num);

       while(num!=0){
        // sum += sum%10;
        sum = sum + (num%10);
        num = num/10;

       }

       printf("Sum of digits %d" , sum);
}