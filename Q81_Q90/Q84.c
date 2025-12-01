//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
#define MAX 1000
void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
int main() {
    char str[MAX];

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    toUpperCase(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}
