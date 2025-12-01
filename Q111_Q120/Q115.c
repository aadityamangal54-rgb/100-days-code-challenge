//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int areAnagrams(char *s, char *t) {
    int freqS[26] = {0};
    int freqT[26] = {0};

    // Calculate frequency of each character in string s
    for (int i = 0; s[i] != '\0'; i++) {
        freqS[s[i] - 'a']++;
    }

    // Calculate frequency of each character in string t
    for (int i = 0; t[i] != '\0'; i++) {
        freqT[t[i] - 'a']++;
    }

    // Compare frequency arrays
    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            return 0; // Not anagrams
        }
    }

    return 1; // Anagrams
}
int main() {
    char s[MAX_LEN];
    char t[MAX_LEN];

    printf("Enter the first string (s): ");
    scanf("%s", s);

    printf("Enter the second string (t): ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
