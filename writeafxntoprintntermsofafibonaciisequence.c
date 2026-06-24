#include<stdio.h>
//function to print n terms of fibonacci series
int fibonacci (int n){
    if (n <= 1) {
        return n;
    }
    int fibN= fibonacci(n-1)+ fibonacci(n-2);
    return fibN;

}
//main function
int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));

    return 0;
}