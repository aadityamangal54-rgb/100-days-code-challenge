// Q8. Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main(){
    int n, sum;
    printf("enter the number: "),
    scanf("%d", &n);
    sum = n*(n+1)/2;
    printf("enter the sum of %d first n natural number: %d\n", n, sum);
    scanf("%d", &sum);
    return 0;

}