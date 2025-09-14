#include <stdio.h>

int main() {
    int a, b, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);]
    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;
        case '/':
            if(b != 0)
                printf("%d / %d = %.2f\n", a, b, (float)a/b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if(b != 0)
                printf("%d %% %d = %d\n", a, b, a % b);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
