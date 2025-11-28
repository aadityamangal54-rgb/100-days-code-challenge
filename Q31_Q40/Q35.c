//Q35: Write a program to print all factors of a given number.
#include <stdio.h>
int main() {
    int num, i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Factors of %d are:\n", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) { // Check if i is a factor
            printf("%d\n", i);
        }
    }

    return 0;
}

