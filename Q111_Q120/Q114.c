//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
#define MAX_LEN 1000
int lengthOfLongestSubstring(char *s) {
    int lastIndex[256]; // Array to store last index of each character
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1; // Initialize all characters as not seen
    }

    int maxLength = 0;
    int start = 0; // Start index of current substring

    for (int i = 0; s[i] != '\0'; i++) {
        char currentChar = s[i];

        // If the character is already seen and is within the current substring
        if (lastIndex[(unsigned char)currentChar] >= start) {
            start = lastIndex[(unsigned char)currentChar] + 1; // Move start to the next position
        }

        lastIndex[(unsigned char)currentChar] = i; // Update last index of current character
        int currentLength = i - start + 1; // Calculate current substring length
        if (currentLength > maxLength) {
            maxLength = currentLength; // Update max length if needed
        }
    }

    return maxLength;
}
int main() {
    char s[MAX_LEN];

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove newline character if present

    int result = lengthOfLongestSubstring(s);

    printf("The length of the longest substring without repeating characters is: %d\n", result);

    return 0;
}
