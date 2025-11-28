// Q7. Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main(){
    int num1, num2;
    printf("enter the first number: ");
    scanf("%d", &num1);
    printf("enter the second number: ");
    scanf("%d", &num2);
    printf("before swapping: num1 = %d, num2 = %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("after swapping: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
    
}