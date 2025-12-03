#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 100
#define MAX_NAME_LEN 50
#define MAX_EMAIL_LEN 50

struct Student {
    int sap_id;
    int roll_no;
    char name[MAX_NAME_LEN];
    char phone[15];
    char email[MAX_EMAIL_LEN];
    int year;
    int semester;
    float sgpa[8];
    float cgpa;
};

struct Student students[MAX_STUDENTS];
int totalStudents = 0;

// Function declarations
void addStudent();
void displayStudent(struct Student s);
void calculateCGPA(struct Student *s);
void calculateAllCGPA();
void averageCGPAbyYear();
void deleteStudent();
void sortBySAPID();
void sortByName();
void viewStudentRecords();

void addStudent() {
    if (totalStudents >= MAX_STUDENTS) {
        printf("Cannot add more students.\n");
        return;
    }

    struct Student s;
    printf("Enter SAP ID: ");
    scanf("%d", &s.sap_id);
    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);
    printf("Enter Name: ");
    getchar(); // clear buffer
    fgets(s.name, MAX_NAME_LEN, stdin);
    s.name[strcspn(s.name, "\n")] = 0;
    printf("Enter Phone Number: ");
    scanf("%s", s.phone);
    printf("Enter Email ID: ");
    scanf("%s", s.email);
    printf("Enter Year (1-4): ");
    scanf("%d", &s.year);
    printf("Enter Semester (1-8): ");
    scanf("%d", &s.semester);

    // Ask SGPA only up to the current semester
    printf("Enter SGPA for completed semesters (1 to %d):\n", s.semester);
    for (int i = 0; i < s.semester; i++) {
        printf("Semester %d: ", i + 1);
        scanf("%f", &s.sgpa[i]);
    }

    // Fill remaining semesters with 0
    for (int i = s.semester; i < 8; i++) {
        s.sgpa[i] = 0;
    }

    calculateCGPA(&s);
    students[totalStudents++] = s;
    printf("Student added successfully!\n");
}

void displayStudent(struct Student s) {
    printf("\nSAP ID: %d", s.sap_id);
    printf("\nRoll No: %d", s.roll_no);
    printf("\nName: %s", s.name);
    printf("\nPhone: %s", s.phone);
    printf("\nEmail: %s", s.email);
    printf("\nYear: %d", s.year);
    printf("\nSemester: %d", s.semester);
    printf("\nSGPA: ");
    for (int i = 0; i < 8; i++)
        printf("%.2f ", s.sgpa[i]);
    printf("\nCGPA: %.2f\n", s.cgpa);
}

void viewStudentRecords() {
    int option;
    printf("\n1. View All Student Records\n");
    printf("2. View Specific Student Record by SAP ID\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    if (option == 1) {
        if (totalStudents == 0) {
            printf("No records to display.\n");
            return;
        }
        for (int i = 0; i < totalStudents; i++) {
            printf("\n-----------------------------\n");
            displayStudent(students[i]);
        }
    } 
    else if (option == 2) {
        int id, found = 0;
        printf("Enter SAP ID to search: ");
        scanf("%d", &id);

        for (int i = 0; i < totalStudents; i++) {
            if (students[i].sap_id == id) {
                displayStudent(students[i]);
                found = 1;
                break;
            }
        }
        if (!found)
            printf("No record found for SAP ID %d\n", id);
    } 
    else {
        printf("Invalid option!\n");
    }
}

void calculateCGPA(struct Student *s) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (s->sgpa[i] > 0) {
            sum += s->sgpa[i];
            count++;
        }
    }
    s->cgpa = (count > 0) ? (sum / count) : 0;
}

void calculateAllCGPA() {
    for (int i = 0; i < totalStudents; i++)
        calculateCGPA(&students[i]);
    printf("CGPA calculated for all students!\n");
}

void averageCGPAbyYear() {
    float sum[5] = {0};
    int count[5] = {0};

    for (int i = 0; i < totalStudents; i++) {
        int y = students[i].year;
        if (y >= 1 && y <= 4) {
            sum[y] += students[i].cgpa;
            count[y]++;
        }
    }

    for (int i = 1; i <= 4; i++) {
        if (count[i] > 0)
            printf("Average CGPA for Year %d: %.2f\n", i, sum[i] / count[i]);
        else
            printf("No students in Year %d\n", i);
    }
}

void deleteStudent() {
    int id, found = 0;
    printf("Enter SAP ID of student to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < totalStudents; i++) {
        if (students[i].sap_id == id) {
            for (int j = i; j < totalStudents - 1; j++)
                students[j] = students[j + 1];
            totalStudents--;
            found = 1;
            printf("Record deleted successfully!\n");
            break;
        }
    }
    if (!found)
        printf("Student with SAP ID %d not found.\n", id);
}

void sortBySAPID() {
    struct Student temp;
    for (int i = 0; i < totalStudents - 1; i++) {
        for (int j = i + 1; j < totalStudents; j++) {
            if (students[i].sap_id > students[j].sap_id) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Sorted by SAP ID successfully!\n");
    for (int i = 0; i < totalStudents; i++)
        displayStudent(students[i]);
}

void sortByName() {
    struct Student temp;
    for (int i = 0; i < totalStudents - 1; i++) {
        for (int j = i + 1; j < totalStudents; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Sorted by Name successfully!\n");
    for (int i = 0; i < totalStudents; i++)
        displayStudent(students[i]);
}

int main() {
    int choice;
    do {
        printf("\n============================\n");
        printf(" STUDENT RECORD SYSTEM MENU \n");
        printf("============================\n");
        printf("1. Add Student Record\n");
        printf("2. View Student Record(s)\n");
        printf("3. Calculate CGPA for all Students\n");
        printf("4. Average CGPA of each Year\n");
        printf("5. Delete a Student Record\n");
        printf("6. Sort by SAP ID\n");
        printf("7. Sort by Name\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: viewStudentRecords(); break;
            case 3: calculateAllCGPA(); break;
            case 4: averageCGPAbyYear(); break;
            case 5: deleteStudent(); break;
            case 6: sortBySAPID(); break;
            case 7: sortByName(); break;
            case 8: printf("Exiting... Thank you!\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}


