// Q11. Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main(){
    int num;
    printf("enter the num: ");
    scanf("%d", &num);
    if(num % 2 == 0)
    printf("%d is even", num);
    else
    printf("%d is odd", num);
    return 0;

}
