//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>  
int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        fclose(inputFile);
        return 1;
    }

    // Read from input file, convert to uppercase, and write to output file
    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    // Close both files
    fclose(inputFile);
    fclose(outputFile);

    printf("Text converted to uppercase and saved to output.txt successfully.\n");

    return 0;
}   
