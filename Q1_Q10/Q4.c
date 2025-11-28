// Q4. Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
#define pi 3.14159
int main(){
    float radius,area,circumference;
    printf("enter the radius of circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    circumference = 2 * pi * radius;
    printf("area of circle is: %.2f\n", area);
    printf("circumference of circle is: %.2f\n", circumference);
    return 0;
}