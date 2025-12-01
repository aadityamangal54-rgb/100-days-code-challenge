//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;

    // Ask the user for a filename
    printf("Enter the filename to check: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        // If file pointer is NULL, print an error message
        printf("Error: The file %s does not exist or cannot be opened.\n", filename);
        return 1;
    }

    // If the file exists, read and display its content
    printf("Contents of %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
