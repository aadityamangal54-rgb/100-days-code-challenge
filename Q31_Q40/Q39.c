//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main() {
    int num, product = 1, remainder;
    int hasOdd = 0; // Flag to check if there are any odd digits

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        if (remainder % 2 != 0) { // Check if the digit is odd
            product *= remainder; // Multiply it to the product
            hasOdd = 1; // Set flag to true
        }
        num /= 10; // Remove the last digit from the number
    }

    if (hasOdd) {
        printf("The product of the odd digits is: %d\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }

    return 0;
}


