// Q17. Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, D, root1, root2, realpart, imagpart;
    printf("enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    D = b*b - 4*a*c;
    if(D>0) {
        root1 = (-b + sqrt(D))/2*a;
        root2 = (-b - sqrt(D))/2*a;
        
    }
}