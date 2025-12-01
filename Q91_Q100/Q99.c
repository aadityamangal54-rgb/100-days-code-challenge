//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>
#define MAX 100
void changeDateFormat(const char dateStr[], char formattedDate[]) {
    const char *monthAbbr = "Apr"; // Abbreviation for April
    int i = 0, j = 0;

    // Copy day part (dd)
    while (dateStr[i] != '/' && dateStr[i] != '\0') {
        formattedDate[j++] = dateStr[i++];
    }
    formattedDate[j++] = ' '; // Add space after day

    // Skip the month part (04)
    while (dateStr[i] != '/' && dateStr[i] != '\0') {
        i++;
    }
    i++; // Move past the '/'

    // Copy month abbreviation
    for (int k = 0; monthAbbr[k] != '\0'; k++) {
        formattedDate[j++] = monthAbbr[k];
    }
    formattedDate[j++] = ' '; // Add space after month

    // Copy year part (yyyy)
    while (dateStr[i] != '\0' && dateStr[i] != '\n') {
        formattedDate[j++] = dateStr[i++];
    }
    formattedDate[j] = '\0'; // Null-terminate the formatted string
}
int main() {
    char dateStr[MAX];
    char formattedDate[MAX];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(dateStr, sizeof(dateStr), stdin);

    changeDateFormat(dateStr, formattedDate);

    printf("Formatted date: %s\n", formattedDate);

    return 0;
}
