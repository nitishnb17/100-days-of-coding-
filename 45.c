#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num = 2, den = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 4;
    }

    printf("Sum of the series up to %d terms = %.2f\n", n, sum);

    return 0;
}
