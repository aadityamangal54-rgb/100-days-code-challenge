//Q94: Find the longest word in a sentence.
#include <stdio.h>
#define MAX 1000
void findLongestWord(const char str[], char longestWord[]) {
    int maxLength = 0;
    int currentLength = 0;
    int startIndex = -1;
    int longestStartIndex = -1;

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if (currentLength == 0) {
                startIndex = i; // Mark the start of a new word
            }
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestStartIndex = startIndex;
            }
            currentLength = 0; // Reset for the next word
        }

        if (str[i] == '\0') {
            break; // End of string
        }
    }

    // Copy the longest word to the output array
    if (longestStartIndex != -1) {
        for (int i = 0; i < maxLength; i++) {
            longestWord[i] = str[longestStartIndex + i];
        }
        longestWord[maxLength] = '\0'; // Null-terminate the string
    } else {
        longestWord[0] = '\0'; // No words found
    }
}
int main() {
    char str[MAX];
    char longestWord[MAX];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    findLongestWord(str, longestWord);

    if (longestWord[0] != '\0') {
        printf("The longest word is: %s\n", longestWord);
    } else {
        printf("No words found in the sentence.\n");
    }

    return 0;
}
