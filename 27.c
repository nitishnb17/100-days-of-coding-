#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = n * n;
    printf("Sum of first %d odd numbers is %d\n", n, sum);
    return 0;
}
