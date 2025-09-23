#include <stdio.h>
#include <math.h>

int main() {
    int n, original, remainder, count = 0;
    double sum = 0.0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n != 0) {
        n = n / 10;
        count++;
    }

    n = original;

    while (n != 0) {
        remainder = n % 10;
        sum = sum + pow(remainder, count);
        n = n / 10;
    }

    if ((int)sum == original)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
