//Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#define MAX 1000
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void reverseEachWord(char str[]) {
    int start = 0;
    for (int i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
        if (str[i] == '\0') {
            break; // End of string
        }
    }
}
int main() {
    char str[MAX];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    reverseEachWord(str);

    printf("Sentence after reversing each word: %s\n", str);

    return 0;
}
