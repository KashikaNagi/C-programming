#include<stdio.h>
//Write a program to make your own pow function
 long long power (int base,int exponent){
if(exponent==0){
    return 1;

}
return base * power( base, exponent - 1);

}
int main(){
    int base, exponent;
    printf("enter base:");
    scanf("%d"  , &base);
    printf("enter the exponent:");
    scanf("%d",   &exponent);
    printf("%d^%d=%d",base, exponent,power(base,exponent));
    return 0;
}



