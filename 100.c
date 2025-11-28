#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len;

    // Taking input
    printf("Enter a string: ");
    gets(str);

    len = strlen(str);

    printf("All substrings: ");
    for (int i = 0; i < len; i++) {       // Start index
        for (int j = i; j < len; j++) {   // End index
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf(", ");  // Separator between substrings
        }
    }

    return 0;
}
