#include <stdio.h>

typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
} Menu;

int main() {
    int choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose an operation:\n");
    printf("1 = ADD\n");
    printf("2 = SUBTRACT\n");
    printf("3 = MULTIPLY\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch ((Menu)choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;

        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
