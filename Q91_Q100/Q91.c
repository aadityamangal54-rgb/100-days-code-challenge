//Q91: Remove all vowels from a string.
#include <stdio.h>
#define MAX 1000
void removeVowels(char str[]) {
    int writeIndex = 0;
    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        char ch = str[readIndex];
        if (ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' &&
            ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[writeIndex++] = ch;
        }
    }
    str[writeIndex] = '\0'; // Null-terminate the modified string
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    removeVowels(str);

    printf("String after removing vowels: %s\n", str);

    return 0;
}
