//Q34: Write a program to check if a number is prime.
#include <stdio.h>
#include <stdbool.h>
int main() {
    int num, i;
    bool isPrime = true;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) { // Check divisibility from 2 to num/2
            if (num % i == 0) {
                isPrime = false; // Found a divisor, so it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

