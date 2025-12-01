//Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#define MAX 1000
char firstRepeatingLowercase(const char str[]) {    
    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch; // Return the first repeating character
            }
        }
    }
    return '\0'; // No repeating lowercase alphabet found
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    char repeatingChar = firstRepeatingLowercase(str);
    if (repeatingChar != '\0') {
        printf("The first repeating lowercase alphabet is: %c\n", repeatingChar);
    } else {
        printf("No repeating lowercase alphabet found in the string.\n");
    }

    return 0;
}
