// Q30. Write a program to reverse a given number.
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10; // Remove the last digit from the original number
    }

    printf("Reversed Number: %d\n", reversed);
    return 0;
}