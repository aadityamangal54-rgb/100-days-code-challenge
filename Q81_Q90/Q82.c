//Q82: Print each character of a string on a new line.
#include <stdio.h>
#define MAX 1000
void printCharactersOnNewLine(const char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Characters in the string on new lines:\n");
    printCharactersOnNewLine(str);

    return 0;
}
