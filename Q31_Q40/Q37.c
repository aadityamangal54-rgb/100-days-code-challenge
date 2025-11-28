//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, lcm, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 and num2 are positive
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    // Start checking from the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Find the LCM using the brute-force method
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max; // Found the LCM
            break;
        }
        max++; // Increment to check the next number
    }

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}

