// Q29. Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i; // Multiply i to the factorial
        }
        printf("The factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}