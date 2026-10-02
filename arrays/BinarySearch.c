#include<stdio.h>

int binarysearch(int arr[] , int size, int Element){
    int low , mid , high;
    low = 0;
    high = size - 1;

    while(low<=high){
        mid = (high + low)/2;
        if(arr[mid] == Element){
            return mid;
        }
        if(arr[mid] < Element){
            low = mid +1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;

}


int main()
{
    int arr[] = {2, 8 ,33,45,76,87,122,164,200};
    int size = sizeof(arr)/sizeof(int);
    int Element = 87;
    int searchindex = binarysearch(arr , size , Element);

    printf("Element  %d found at index %d" , Element , searchindex);

}
