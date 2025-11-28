#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100], surname[50];
    int i = 0, len, lastSpace = -1;

    // Taking input
    printf("Enter full name: ");
    gets(name);
    len = strlen(name);

    // Find the last space to separate surname
    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    // Print initials of first and middle names
    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || (name[i-1] == ' ' && name[i] != ' ')) {
            printf("%c.", toupper(name[i]));
        }
    }

    // Print the surname
    for (i = lastSpace + 1; i < len; i++) {
        printf("%c", name[i]);
    }

    return 0;
}
