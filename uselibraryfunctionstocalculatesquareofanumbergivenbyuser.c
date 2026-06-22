#include<stdio.h>
#include<math.h>
//function to calculate the square of a user defined number
void calculatesquare();
int main(){
    calculatesquare();
    return 0;
}
//definition of the function to calculate the square of a user defined number
void calculatesquare(){
    int number;
    printf("enter the number whose square you want to calculate\n");
    scanf("%d",&number);
printf("the square of the number %d is %d\n",number,number*number);

}
