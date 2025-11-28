// Q3. Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(){
    float l,b;
    printf("enter the length : ");
    scanf("%f",&l);
    printf("enter the breadth : ");
    scanf("%f",&b);
    printf("area of rectangle = %.2f\n",l*b);
    printf("\nperimeterof rectangle = %.2f\n",2*(l+b));
    return 0;
}