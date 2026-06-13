#include<stdio.h>
//to print whether number is positive or negative as well as odd or even using nested if statement
int main(){
    int number;
    printf("enter a number");
    scanf("%d", &number);
    if(number >=0){
        printf("number is positive \n");
        if(number % 2 == 0){
            printf("number is even \n");
         } else{
            printf("number is odd \n");
         }
    }
    else{
        printf("number is negative \n");
    }

}
