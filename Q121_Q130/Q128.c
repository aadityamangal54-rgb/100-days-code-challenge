//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char filename[] = "info.txt";
    char ch;
    int vowel_count = 0, consonant_count = 0;

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file %s!\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        ch = tolower(ch); // Convert character to lowercase for easier comparison

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
        // Check if the character is a consonant
        else if (ch >= 'a' && ch <= 'z') {
            consonant_count++;
        }
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Total vowels: %d\n", vowel_count);
    printf("Total consonants: %d\n", consonant_count);

    return 0;
}
