//Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#define MAX 1000
int areAnagrams(const char str1[], const char str2[]) {
    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        char ch = str1[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }

    // Decrease frequency based on characters in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        char ch = str2[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']--;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']--;
        }
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return 0; // Not anagrams
        }
    }
    return 1; // Anagrams
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

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams of each other.\n");
    } else {
        printf("The strings are not anagrams of each other.\n");
    }

    return 0;
}
