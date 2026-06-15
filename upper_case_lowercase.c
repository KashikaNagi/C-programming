#include<stdio.h>
// to check whether user entered character is upper case lower case or not an letters
int main(){
    char ch;
    printf("enter character \n");
    scanf("%c", &ch);
    if (ch >= 'A' &&  ch <= 'Z'){
        printf("upper case \n");
    }
    else if( ch >= 'a'  && ch <= 'z') {
        printf(" lower case \n");
    }
    else {
        printf(" not an english letter \n");}

        return 0;

    }