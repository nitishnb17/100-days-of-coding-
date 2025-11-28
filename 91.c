#include <stdio.h>

int main() {
    char str[100], result[100];
    int i, j = 0;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Skip vowels (both uppercase and lowercase)
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    printf("String without vowels: %s", result);
    return 0;
}
