#include <stdio.h>

int main() {
    int n, remainder;
    long long binary = 0;
    long long place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        remainder = n % 2;
        n = n / 2;
        binary = binary + remainder * place;
        place = place * 10;
    }

    printf("Binary: %lld\n", binary);
    return 0;
}
