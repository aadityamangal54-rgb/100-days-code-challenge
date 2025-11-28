//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder;      // Add it to the sum
        num /= 10;            // Remove the last digit from the number
    }

    printf("The sum of the digits is: %d\n", sum);
    return 0;
}



