#include<stdio.h>
//write a function to find sum of digits of a number
 long long int SumOfDigits(long long int n){
    if (n==0){
        return 0;
}
return (n % 10) + SumOfDigits(n/10);
}
    int main(){
        int n;
        printf("enter a number:");
        scanf("%lld", &n);
        printf("Sum of digits = %lld", SumOfDigits(n));
        
        return 0;

    }