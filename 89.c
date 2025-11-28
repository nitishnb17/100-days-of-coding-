#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d", count);
    return 0;
}
