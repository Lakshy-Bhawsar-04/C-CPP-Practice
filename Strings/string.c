/*

    Strings in C

           character Arrays.....

     int arr[5] = {7,9,3,6,5};

     char str[6] = {'L' , 'A' , 'K' , 'S' , 'H' , 'Y'};


*/


#include<stdio.h>
#include<string.h>
int main(){

    // compiler  time input
    
    char str[7] = {'L' , 'A' , 'K' , 'S' , 'H' , 'Y'};

    char str1[8] = "Bhawsar";

    // Access the Strings

    int i = 0;
    while(str1[i] != '\0'){
         
        printf("%c" , str1[i]);
        i++;
    }

    //   printf.....
    printf("\n%s\n" , str);

    //Runtime input....

    char str2[10];
    printf("Enter your name\n");
    // scanf("%s" ,str2);
    // gets(str2);

    fgets(str2,10,stdin);

    //scanf does not allow input after space or new line character.
    // scanf does not check array boundary...

    // gets does allow input after space or new line character.

    printf("User name : %s\n" ,str2);
}