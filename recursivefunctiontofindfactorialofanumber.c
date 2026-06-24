#include<stdio.h>
//function to find factorial of anumber using recursion
void factorial(long long n);
long long findFactorial(long long n){
    if (n==0)
    return 1;
    else
    return n*findFactorial(n-1);


}
int main(){
    long long n;
    printf("Enter the number whose factorial you want to find: ");
scanf("%lld",&n);
printf("the factorial of n is %lld", findFactorial (n));
return 0;
}

