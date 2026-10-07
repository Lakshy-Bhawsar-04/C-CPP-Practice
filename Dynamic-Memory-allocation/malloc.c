#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a = 20;

    int *ptr = (int*)malloc(sizeof(int));

    if(ptr==NULL){
        printf("Error allocating memory\n");
        return 0;
    }

    *ptr = 38;

    printf("a = %d\n",a);
    printf("*ptr = %d\n",*ptr);

    free(ptr);

    return 0;
}