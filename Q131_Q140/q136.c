#include <stdio.h>
#include <string.h>
int main() {
    enum Operation { ADD, SUBTRACT, MULTIPLY };
    char op[20];
    int a, b;
    enum Operation choice;
    scanf("%s %d %d", op, &a, &b);
    if (strcmp(op, "ADD") == 0)
        choice = ADD;
    else if (strcmp(op, "SUBTRACT") == 0)
        choice = SUBTRACT;
    else if (strcmp(op, "MULTIPLY") == 0)
        choice = MULTIPLY;
    else {
        printf("Invalid operation");
        return 0;
    }
    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;
        case SUBTRACT:
            printf("%d", a - b);
            break;
        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
