#include<stdio.h>
//this program will take input from user until multiple of 7 is entered
int main(){
    int n;
    do{
        printf("enter a number:");
        scanf("%d", &n);

        if(n % 7== 0)
            break;
    } while(1);

    printf("you entered a multiple of 7\n");
    return 0;
}
