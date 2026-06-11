#include<stdio.h>
// to check if a number is divisible by 2 or not
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);
    if(n%2==0){
    printf("the number is divisible by 2");
    } 
    else{
    printf("the number is not divisible by 2");
    }
    return 0;
}
