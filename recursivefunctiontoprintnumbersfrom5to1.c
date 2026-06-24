#include<stdio.h>
//function to print numbers from 5 to 1 using recursion

void printnumbers(int n) {
    if (n < 1) {
        return;
    }
    printf("%d",n);
    printf("\n");
    printnumbers(n - 1);
}

int main() {
    printnumbers(5);
    return 0;
}