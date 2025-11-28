//Q55: Write a program to print all the prime numbers from 1 to n.
#include <stdio.h>
#include <stdbool.h>
int main() {
    int n, i, j;
    bool isPrime;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are: \n", n);
    for (i = 2; i <= n; i++) {
        isPrime = true;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}


