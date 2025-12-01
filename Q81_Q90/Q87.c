//Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>
#define MAX 1000
void countSpacesDigitsSpecialChars(const char str[], int *spaceCount, int *digitCount, int *specialCharCount) {
    *spaceCount = 0;
    *digitCount = 0;
    *specialCharCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            (*spaceCount)++;
        } else if (ch >= '0' && ch <= '9') {
            (*digitCount)++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Do nothing for alphabetic characters
        } else {
            (*specialCharCount)++;
        }
    }
}

int main() {
    char str[MAX];
    int spaceCount, digitCount, specialCharCount;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countSpacesDigitsSpecialChars(str, &spaceCount, &digitCount, &specialCharCount);

    printf("Number of spaces: %d\n", spaceCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Number of special characters: %d\n", specialCharCount);

    return 0;
}
