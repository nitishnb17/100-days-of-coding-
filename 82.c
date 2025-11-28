#include <stdio.h>

int main() {
    char str[1000];  // Declare a string array of sufficient size
    int i = 0;

    // Reading input string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Printing each character on a new line until null character '\0' or newline '\n'
    while (str[i] != '\0' && str[i] != '\n') {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
