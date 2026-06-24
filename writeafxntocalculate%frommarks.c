#include<stdio.h>
//write a function to calculate % from marks in science ,maths& sanskrit
float calculatePercentage(float science, float maths, float sanskrit) {
    float total = science + maths + sanskrit;
    return (total / 300) * 100;
}
int main(){
    float science, maths, sanskrit;
    printf("enter marks in science:");
    scanf("%f",&science);
    printf("enter marks in maths:");
    scanf("%f",&maths);
    printf("enter marks in sanskrit:");
    scanf("%f",&sanskrit);
    printf("the percentage is: %f",calculatePercentage(science, maths, sanskrit));
    return 0;
}