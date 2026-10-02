/*
  Write a program to calculate the length of the string.  
 */

 #include<stdio.h>

 int strlength(char str[]){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
 }
 int main(){
    char str[100] = "Lakshy Bhawsar";

    int len = strlength(str);

    printf("length of string %d\n" ,len);
 }