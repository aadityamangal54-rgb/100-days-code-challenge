//Q97: Print the initials of a name.

#include <stdio.h>
#define MAX 1000
void printInitials(const char str[]) {
    int i = 0;
    // Print the first character if it's not a space
    if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
        printf("%c. ", str[i]);
    }

    // Traverse the string to find spaces and print the next character
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n') {
            printf("%c. ", str[i + 1]);
        }
    }
    printf("\n");
}
int main() {
    char str[MAX];

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    printf("Initials: ");
    printInitials(str);

    return 0;
}
