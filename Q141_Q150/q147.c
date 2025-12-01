#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e, e_read;
    FILE *fp;
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    printf("Enter Employee Details:\n");
    printf("Name: ");
    scanf("%s", e.name);
    printf("ID: ");
    scanf("%d", &e.id);
    printf("Salary: ");
    scanf("%f", &e.salary);

    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e_read, sizeof(e_read), 1, fp);
    fclose(fp);

    printf("\nEmployee Details Read From File:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",
           e_read.name, e_read.id, e_read.salary);

    return 0;
}
