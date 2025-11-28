//Q31: Write a program to take a number as input and print its equivalent binary representation. 
#include <stdio.h>
int main() {
    int num, binary[32], i = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Convert to binary
    while (num > 0) {
        binary[i] = num % 2; // Store remainder (0 or 1)
        num /= 2;            // Divide number by 2
        i++;
    }

    // Print binary representation in reverse order
    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

