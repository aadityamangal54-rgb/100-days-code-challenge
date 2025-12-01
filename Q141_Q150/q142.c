#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students (Name, Roll, Marks):\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n-----------------------------------------------\n");
    printf(" %-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-----------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf(" %-15s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    printf("-----------------------------------------------\n");

    return 0;
}
