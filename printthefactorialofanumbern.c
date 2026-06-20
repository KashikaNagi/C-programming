#include<stdio.h>
//print the factorial of a number n
int main(){
    int n;
    long long fact = 1;
 printf("Enter the number n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("The factorial of %d is %lld\n", n, fact);
    return 0;
}

