#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    int num = 1;
    int den = 1;

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;
            num = 3;
            den = 4;
        } else {
            sum += (float)num / den;
            num += 2;
            den += 2;
        }
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
