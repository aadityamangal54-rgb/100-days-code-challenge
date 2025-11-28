// Q9. Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    float principal, rate, time;
    float simpleinterest, compoundinterest;
    printf("enter the amount of principal: ");
    scanf("%f", &principal);
    printf("enter the rate: ");
    scanf("%f", &rate);
    printf("enter the time: ");
    scanf("%f", &time);
    simpleinterest = (principal * rate * time)/100;
    compoundinterest = principal * pow((1+rate/100),time)-principal;
    printf("\nsimpleinterest = %.2f\n", simpleinterest);
    printf("\ncompoundinterest = %.2f\n", compoundinterest);
    return 0;
 
}