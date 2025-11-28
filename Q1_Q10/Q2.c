// Q2. Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("enter first no. :");
    scanf("%d",&a);
    printf("enter second no. :");
    scanf("%d",&b);
    c = a+b;
    printf("sum of a and b :%d",c);
    d = a-b;
    printf("difference of a and b :%d",d);
    e = a*b;
    printf("product of a and b :%d",e);
    f = a/b;
    printf("quotient of and b :%d",f);
    return 0;
    
    
    

}