#include <stdio.h>

typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW
} Color;

int main() {
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    for (Color c = RED; c <= YELLOW; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}
