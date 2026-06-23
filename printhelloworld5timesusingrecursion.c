#include<stdio.h>
//function to print hello world 5 times using recursion

void printHelloWorld(int count);
int main(){
    printHelloWorld(5);
    return 0;
}
// recursive function to print Hello World
void printHelloWorld(int count) {
   // base case: stop recursion when count reaches 0
    if (count <= 0) {
        return;
    }
    printf("hello world\n");
   // recursive call with count decreased by 1
    printHelloWorld(count - 1);
}