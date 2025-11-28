// Q5. Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(){
    float temp;
    printf("enter the temp:");
    scanf("%f",&temp);
    printf("temperature in fahrenheit:%f\n",(temp*9/5)+32);
    return 0;
}