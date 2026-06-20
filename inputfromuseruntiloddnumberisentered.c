#include<stdio.h>
//this program will take input from user until an odd number is entered
int main(){
    int n;
    do{
        printf("enter a number:");
        scanf("%d", &n);

        if(n % 2 != 0)
            break;
    } while(1);

    printf("you entered an odd number\n");
    return 0;
}






