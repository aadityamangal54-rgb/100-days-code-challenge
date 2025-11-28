//Q36: Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main() {
    int num1, num2, hcf, i;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 and num2 are positive
    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    // Find the HCF using the brute-force method
    hcf = 1; // Initialize HCF to 1
    for (i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; // Update HCF if i is a common factor
        }
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}

