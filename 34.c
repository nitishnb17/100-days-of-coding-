#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("The number is not prime.\n");
        return 0;
    }

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");

    return 0;
}
