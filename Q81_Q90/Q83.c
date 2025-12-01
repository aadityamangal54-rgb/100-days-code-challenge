//Q83: Count vowels and consonants in a string.

#include <stdio.h>
#define MAX 1000
void countVowelsAndConsonants(const char str[], int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // Check for vowels
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
    }
}
int main() {
    char str[MAX];
    int vowelCount, consonantCount;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowelsAndConsonants(str, &vowelCount, &consonantCount);

    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}
