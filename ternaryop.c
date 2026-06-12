#include<stdio.h>
//if age is greater than 18 print adult else print not adult using ternary operator
int main(){
    int age;
    printf("enter the age");
    scanf("%d", &age);
    age >=18 ? printf("age is  adult")  : printf("age is not adult");
return 0;
} 