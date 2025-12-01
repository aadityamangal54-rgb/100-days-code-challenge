#include <stdio.h>
#include <string.h>
int main() {
    enum Signal { RED, YELLOW, GREEN };
    char input[10];
    enum Signal light;
    scanf("%s", input);
    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else
        light = GREEN;

    switch (light) {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
    }
    return 0;
}
