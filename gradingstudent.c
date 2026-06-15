#include<stdio.h>
//program to give grades to a student
int main(){
    int marks;
    printf("enter the marks");
    scanf("%d", &marks);
    if(marks < 30){
        printf(" C grade \n");
     }
    else if( marks <= 30 && marks < 70 ){
     printf(" B grade \n");
 }
    else if( marks >= 70 && marks < 90 ){
     printf(" A grade");
 }
    else {
        printf("A+ grade");
     }
            return 0;
    }
    

