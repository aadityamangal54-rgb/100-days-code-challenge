//Q100: Print all sub-strings of a string.

#include <stdio.h>
#define MAX 1000
void printSubstrings(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int k = start; k <= end; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("All substrings of the string are:\n");
    printSubstrings(str);

    return 0;
}
