#include<stdio.h>
// this program is to print the reverse of a table of a number
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);

    for(int i= 10; i>=1; i--){
        printf("%d\n", n * i);
    }
    return 0;


}