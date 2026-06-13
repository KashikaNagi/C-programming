#include<stdio.h>
//program to check if a  student passed or failed
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if(marks>30){
        printf(" is PASS \n");
     } else{
            printf(" is FAIL \n");
            return 0;
        }
            }
