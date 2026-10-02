#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main()
{
    int arr[] = {5,4,2,1,3};
    int size = sizeof(arr) / sizeof(int);

    cout<<"Array before sort : ";
    for(int i =0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    bubbleSort(arr,size);
    
    cout<<"Array after sort : ";
    for(int i =0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}