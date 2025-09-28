#include <stdio.h>

int main() {
    int num, originalNum, digit, fact, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is a Strong number\n", originalNum);
    else
        printf("%d is not a Strong number\n", originalNum);

    return 0;
}
