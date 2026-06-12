#include<stdio.h>
//if age is greater than 18 print adult else print not adult
int main(){
    int age;
    printf("enter the age");
    scanf("%d", &age);
    if(age <=18) {
        printf("age is adult");
    }
    else{
        printf("age is not adult");
    }
return 0;
} 