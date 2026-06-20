#include<stdio.h>
// this program calculate the sum of all the numbers from 5 to 50 including 5 and 50
int main(){
    int i;
    int sum = 0;

    for(i = 5; i <= 50; i++){
        sum += i;
    }

    printf("your sum is '%d'\n", sum);
    return 0;
}

