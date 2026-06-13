#include<stdio.h>
//program to check if a  student passed or failed
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if(marks>30 && marks <=100){
        printf(" is PASS \n");
     } else if( marks >= 0 && marks <= 30)
     {
            printf(" is FAIL \n");
     }
     else {
        printf("wrong marks");
     }
            return 0;
        }
    
