#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    long long totalSum = (long long)n * (n + 1) / 2;

    for (int x = 1; x <= n; x++) {
        long long leftSum = (long long)x * (x + 1) / 2;
        long long rightSum = totalSum - (long long)(x - 1) * x / 2;

        if (leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
