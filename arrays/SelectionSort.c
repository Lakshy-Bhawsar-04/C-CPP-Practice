#include <stdio.h>

void SelectionSort(int arr[] , int size){
    for(int i=0;i<size;i++){
        int min = i;
        for(int j=min+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
    }
}
int main()
{
    int arr[] = {10,2,5,1,7,8,3};
    int size = sizeof(arr) / sizeof(int);

    printf("Array before sort \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");
    SelectionSort(arr,size);

     printf("Array after sort \n");
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}