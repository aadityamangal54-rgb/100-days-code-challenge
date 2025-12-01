//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines .
#include <stdio.h>
int main() {
    FILE *file;
    char filename[] = "info.txt";
    char ch;
    int char_count = 0, word_count = 0, line_count = 0;
    int in_word = 0; // Flag to track if we are inside a word

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s!\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        // Check for new lines
        if (ch == '\n') {
            line_count++;
        }

        // Check for word boundaries
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            in_word = 0; // We are outside a word
        } else {
            if (in_word == 0) {
                word_count++; // We found a new word
                in_word = 1; // We are now inside a word
            }
        }
    }

    // If the file is not empty and does not end with a newline, count the last line
    if (char_count > 0 && ch != '\n') {
        line_count++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Total characters: %d\n", char_count);
    printf("Total words: %d\n", word_count);
    printf("Total lines: %d\n", line_count);

    return 0;
}
