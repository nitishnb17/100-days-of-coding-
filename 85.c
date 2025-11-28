#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int len, i, j;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    j = 0;

    // Reversing the string manually
    for (i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';  // Null terminate the reversed string

    printf("Reversed String: %s", rev);
    return 0;
}
