#include<stdio.h>

struct Student {
    char name[100];
    int roll_No;
    int age;

};

int main(){
    struct Student s1 ={"Lakshy",101,18};  // compile time input

    //Access using (.) operator variablename.datamemberName
    
    printf("Name of Student 1 : %s\n",s1.name);
    printf("Roll no. of Student 1 : %d\n",s1.roll_No);
    printf("Age of Student 1 : %d\n ",s1.age); 
    
    printf("\n");
    struct Student s2 ={"akshay",102,35};

    printf("Name of Student 2 : %s\n",s2.name);
    printf("Roll no. of Student 2 : %d\n",s2.roll_No);
    printf("Age of Student 2 : %d\n ",s2.age);

}