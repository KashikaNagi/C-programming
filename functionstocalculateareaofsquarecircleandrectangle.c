#include<stdio.h>
//function to calculate the area of square, circle and rectangle
void calculatesquarearea();
void calculatecirclearea();
void calculaterectanglearea();
int main(){
    calculatesquarearea();
    calculatecirclearea();
    calculaterectanglearea();
    return 0;


}
//defination of the function to calculate the area of square
void calculatesquarearea(){
    int side;
    printf("enter the side of the square:");
    scanf("%d" ,&side);
    printf("\n the area of the square is: %d", side * side);
}
//definition of the function to calculate the area of circle
void calculatecirclearea(){
    float radius;
    printf("enter the radius of the circle:");
    scanf("%f" ,&radius);
    printf(" the area of the circle is :%f",3.14*radius * radius);
}
//defination of the function to calculate the area of rectangle
void calculaterectanglearea(){
    int length, breadth;
    printf("enter the length and breadth of the rectangle:");
    scanf("%d %d", &length, &breadth);
    printf("the area of the rectangle is: %d", length * breadth);
}