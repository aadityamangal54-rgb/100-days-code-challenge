//Q89: Count frequency of a given character in a string.

#include <stdio.h>
#define MAX 1000
int countCharacterFrequency(const char str[], char target) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            count++;
        }
    }
    return count;
}
int main() {
    char str[MAX];
    char target;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter the character to count its frequency: ");
    scanf(" %c", &target);
    
    int frequency = countCharacterFrequency(str, target);
    printf("The character '%c' appears %d times in the string.\n", target, frequency);
    
    return 0;
}
