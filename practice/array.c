#include <stdio.h>

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;

    // reverse of this number

    printf("Reverse of numbers : ");

    for (int i = n - 1; i > -1; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}