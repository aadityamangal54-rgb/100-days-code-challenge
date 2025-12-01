#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student s;      
    struct Student *p;      

    p = &s;                 

    printf("Enter student details (Name Roll Marks): ");
    scanf("%s %d %f", p->name, &p->roll, &p->marks);   

    printf("\nModified Data: Name: %s | Roll: %d | Marks: %.2f\n",
           p->name, p->roll, p->marks);

    return 0;
}
