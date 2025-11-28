// Q28. Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() {
    int n, i;
    unsigned long long product = 1; // Use unsigned long long to handle large products
    int hasEven = 0; // Flag to check if there are any even numbers

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Check if the number is even
            product *= i;
            hasEven = 1; // Set flag to true
        }
    }

    if (hasEven) {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}   

