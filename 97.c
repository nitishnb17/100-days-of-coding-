#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];

    // Taking input
    printf("Enter a name: ");
    gets(name);

    int i = 0;
    // Print first character as initial
    if (name[0] != ' ')
        printf("%c.", toupper(name[0]));

    while (name[i] != '\0') {
        // Find spaces and print next character as initial
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c.", toupper(name[i+1]));
        i++;
    }

    return 0;
}
