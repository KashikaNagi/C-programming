#include<stdio.h>
//if a number is greater than 9 & less than 100 print true or false
int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
printf("%d,\n", number>9 && number<100);
return 0;
} 