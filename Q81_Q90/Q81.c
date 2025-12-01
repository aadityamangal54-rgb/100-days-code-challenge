//Q81: Count characters in a string without using built-in length functions.
#include <stdio.h>
#define MAX 1000
int countCharacters(const char str[]) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = countCharacters(str);
    // Subtract 1 if the last character is a newline added by fgets
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("Number of characters in the string: %d\n", length);

    return 0;
}
