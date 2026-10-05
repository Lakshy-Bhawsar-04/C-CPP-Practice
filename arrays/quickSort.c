/*Hoare-style partition*/

#include <stdio.h>
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j =high;

    do{
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>pivot)
        {
            j--;
        }
        
        if(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;       
    }
        
    }while (i<j);


    int temp = arr[low];
    arr[low] =arr[j];
    arr[j] = temp;

    return j ;
    
    
}

void quickSort(int arr[] , int low , int high){
    int patitionIndex;

    if(low<=high){
        patitionIndex = partition(arr,low,high);

        quickSort(arr,low,patitionIndex-1);
        quickSort(arr,patitionIndex+1,high);

    }
}

int main()
{
    int arr[] = {2, 4, 6, 7, 8, 1, 3};
    int n = 7;

    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}