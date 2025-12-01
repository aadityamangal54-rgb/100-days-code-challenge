//Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
#define MAX 1000
int isRotation(const char str1[], const char str2[]) {
    int len1 = 0, len2 = 0;

    // Calculate lengths of both strings
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // If lengths are not equal, str2 cannot be a rotation of str1
    if (len1 != len2) {
        return 0;
    }

    // Create a new string that is str1 concatenated with itself
    char concatenated[MAX * 2];
    for (int i = 0; i < len1; i++) {
        concatenated[i] = str1[i];
    }
    for (int i = 0; i < len1; i++) {
        concatenated[len1 + i] = str1[i];
    }
    concatenated[len1 * 2] = '\0';

    // Check if str2 is a substring of the concatenated string
    for (int i = 0; i <= len1 * 2 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (concatenated[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // str2 is a rotation of str1
        }
    }

    return 0; // str2 is not a rotation of str1
}
int main() {
    char str1[MAX];
    char str2[MAX];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2)) {
        printf("The second string is a rotation of the first string.\n");
    } else {
        printf("The second string is not a rotation of the first string.\n");
    }

    return 0;
}

