#include<stdio.h>
// this program prints all the odd numbers from 5 to 50
int main(){
    int i;
    for(i=0;i<=50;i=i+1){
        if(i%2!=0 && i>=5){
            printf("%d\n",i);
            
        }
    }
    return 0;
}