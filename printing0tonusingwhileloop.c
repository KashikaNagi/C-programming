#include<stdio.h>
// print the numbers from 0-n if n is given by user n=4
int main(){
    int n;
    printf(" enter number :");
    scanf("%d", &n);
 //iterator;counter
 int i = 0;
    while(i<=n){
        printf(" %d \n", i);
        i++;
  }
    return 0;
}