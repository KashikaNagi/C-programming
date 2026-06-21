#include<stdio.h>
//write two functions one to print hello and second to print goodbye
//this function prints hello
void printhello();
//this function prints goodbye// the functions prints goodbye
void printgoodbye();
int main(){
    printhello();
    printgoodbye();
    return 0;
}
//definition of the function to print hello
void printhello(){
    printf("hello\n");
}
//definition of the function to print goodbye
void printgoodbye(){
    printf("goodbye\n");
}