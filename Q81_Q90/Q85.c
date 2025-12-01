//Q85: Reverse a string.

#include <stdio.h>
#define MAX 1000
void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    while (str[end] != '\0') {
        end++;
    }
    end--; // Set to last character before null terminator

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
