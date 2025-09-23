#include <stdio.h>

int main() {
    long long binary, original, remainder, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    original = binary;

    while (binary != 0) {
        remainder = binary % 10;
        if (remainder != 0 && remainder != 1) {
            printf("Invalid binary number.\n");
            return 0;
        }
        remainder = 1 - remainder;
        onesComplement = onesComplement + remainder * place;
        place = place * 10;
        binary = binary / 10;
    }

    printf("1's complement of %lld is: %lld\n", original, onesComplement);

    return 0;
}
