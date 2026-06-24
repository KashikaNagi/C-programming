#include<stdio.h>
//function to covert temperature from celsius to fahrenheit
float celsiustofahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}
int main(){
    float celsius;
    printf("enter the temperature in celsius:");
    scanf("%f",&celsius);
    printf(" the temperature in fahrenheit is: %f",celsiustofahrenheit(celsius));
    return 0;
}
