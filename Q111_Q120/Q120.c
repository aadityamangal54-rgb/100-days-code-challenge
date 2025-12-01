//Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>
#define MAX_LENGTH 1000
void to_sentence_case(char str[]) {
    int i = 0;
    int capitalize_next = 1; // Flag to indicate if the next character should be capitalized

    while (str[i] != '\0') {
        if (capitalize_next && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize_next = 0; // Reset the flag after capitalizing
        } else {
            str[i] = tolower(str[i]);
        }

        // Check for sentence-ending punctuation
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize_next = 1; // Set the flag to capitalize the next character
        }

        i++;
    }
}
int main() {
    char str[MAX_LENGTH];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    to_sentence_case(str);

    printf("String in sentence case: %s\n", str);

    return 0;
}
