#include<stdio.h>
//write two functions one to print Namaste if user is Indian and second to print Bonjour if user is French
//this function prints Namaste
void printnamaste();
//this function prints bonjour
void printbonjour();

int main(){
    printf("enter i for indian and f for french\n");
    char ch;
    scanf("%C",&ch);
    if(ch=='i'){
        printnamaste();
    }
    else if(ch=='f'){
        printbonjour();
    }
    else{
        printf("invalid input\n");
    }
    return 0;
}
//definition of the function to print namaste
void printnamaste(){
    printf("Namaste\n");
}

//definition of the function to print bonjour
void printbonjour(){
    printf("Bonjour\n");
}

