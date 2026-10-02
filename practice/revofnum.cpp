#include <iostream>
using namespace std;

void reverseofarr(int arr[],int n)
{
    int st = 0;
    int end = n-1;

    while(st < end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;

    reverseofarr(arr,n);

    printf("Reverse of array ");
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}