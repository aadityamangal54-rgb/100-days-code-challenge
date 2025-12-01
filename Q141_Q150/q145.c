#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
struct Student getTopper(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }

    return s[topIndex];  
}

int main() {
    int n, i;
    struct Student s[100], topper;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("\nEnter %d students (Name Roll Marks):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    topper = getTopper(s, n); 

    printf("\nTop Student: %s | Roll: %d | Marks: %.2f\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}
