#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d", &n);

    for(int i= 1; i<=10; i+=1){
        printf("%d\n", n * i);
    }
    return 0;


}