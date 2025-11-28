#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalpha(str[i]))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}
