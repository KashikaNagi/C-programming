#include<stdio.h>
//write a function to find square root of a number
long long int SquareRootOfANum(long long int n , int i){
if (i * i == n)
    return i;

if (i * i > n)
    return -1;

return SquareRootOfANum(n, i + 1);
   }
    int main() {
    long long int n;

    printf("Enter the number: ");
    scanf("%lld", &n);

    printf("Square root of a number == %lld",
           SquareRootOfANum(n, 1));

    return 0;
}