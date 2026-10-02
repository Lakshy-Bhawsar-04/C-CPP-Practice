// #include <stdio.h>

// int reverseofnum(int n){

//     int rev = 0;
//     while(n>0){

//         int rem = n % 10;
//         rev = rev * 10 + rem;
//         n = n /10;

//     }
//     return rev;
// }

// int main()
// {
//     int n = 12345;

//    int rev =  reverseofnum(n);

//    printf("Revers of number is %d ",rev);

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int n = 5;

//     printf("Reverse of array : ");

//     for(int i=n-1;i>=0;i--){
//         printf("%d",arr[i]);
        
//     }
//     return 0;
// }
#include <stdio.h>

void reveseofarr(int arr[],int n){
    int start = 0;
    int end = n-1;
    int temp;

    while(start < end){
       temp = arr[start];
       arr[start] = arr[end];
       arr[end] = temp;

       start++;
       end--;

    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    reveseofarr(arr,n);
    
    printf("Reverse of number : ");


    for(int i=0;i<n;i++){
        printf("%d" , arr[i]);
    }

    return 0;
}