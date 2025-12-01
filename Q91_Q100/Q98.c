//Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#define MAX 1000
void printInitialsWithSurname(const char str[]) {
    int i = 0;
    // Print the first character if it's not a space
    if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
        printf("%c. ", str[i]);
    }

    // Traverse the string to find spaces and print the next character
    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n') {
            // Check if this is the last name
            int j = i + 1;
            int isLastName = 1;
            while (str[j] != '\0') {
                if (str[j] == ' ') {
                    isLastName = 0;
                    break;
                }
                j++;
            }
            if (isLastName) {
                // Print the surname in full
                printf("%s", &str[i + 1]);
                break;
            } else {
                printf("%c. ", str[i + 1]);
            }
        }
    }
    printf("\n");
}
int main() {
    char str[MAX];

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    printf("Initials with surname: ");
    printInitialsWithSurname(str);

    return 0;
}
