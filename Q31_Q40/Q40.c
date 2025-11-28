//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>
int main() {
    char binary[65]; // Assuming a maximum of 64 bits for the binary number
    char onesComplement[65];
    int i, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Validate input
    length = strlen(binary);
    for (i = 0; i < length; i++) {
        if (binary[i] != '0' && binary[i] != '1') {
            printf("Invalid binary number. Please enter only 0s and 1s.\n");
            return 1;
        }
    }

    // Calculate 1's complement
    for (i = 0; i < length; i++) {
        onesComplement[i] = (binary[i] == '0') ? '1' : '0';
    }
    onesComplement[length] = '\0'; // Null-terminate the string

    printf("1's Complement: %s\n", onesComplement);
    return 0;
}



