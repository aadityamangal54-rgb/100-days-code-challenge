//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#define MAX_NAME_LENGTH 100
#define MAX_STUDENTS 50
typedef struct {
    char name[MAX_NAME_LENGTH];
    int roll_number;
    float marks;
} Student;
int main() {
    FILE *file;
    Student students[MAX_STUDENTS];
    int n, i;

    // Take number of students as input
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Take student records as input
    for (i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Open the file in write mode to store student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    // Write student records to the file
    for (i = 0; i < n; i++) {
        fprintf(file, "%s %d %.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }

    // Close the file after writing
    fclose(file);
    printf("Student records saved to students.txt successfully.\n");

    // Open the file in read mode to read student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    // Read and display student records from the file
    printf("\nStudent Records:\n");
    printf("-------------------------------\n");
    printf("Name\tRoll Number\tMarks\n");
    printf("-------------------------------\n");
    for (i = 0; i < n; i++) {
        fscanf(file, " %[^\n] %d %f", students[i].name, &students[i].roll_number, &students[i].marks);
        printf("%s\t%d\t\t%.2f\n", students[i].name, students[i].roll_number, students[i].marks);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}

