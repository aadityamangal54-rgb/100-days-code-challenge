//Q88: Replace spaces with hyphens in a string.
#include <stdio.h>
#define MAX 1000
void replaceSpacesWithHyphens(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    replaceSpacesWithHyphens(str);

    printf("String after replacing spaces with hyphens: %s\n", str);

    return 0;
}
