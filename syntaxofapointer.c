#include<stdio.h>
int main() {  // The main function, where the program execution starts.
    int age = 19;  // Declare an integer variable 'age' and initialize it to 19.
    int* ptr = &age;  // Declare a pointer 'ptr' that stores the address of 'age'.
    int _age = *ptr;  // Dereference 'ptr' to get the value of 'age' and store it in '_age'.
    printf("%d", _age);  // Print the address of '_age' (not the value).
    return 0;  //indicate successful execution of the program.
}