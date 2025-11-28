#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start, end;

    // Taking input
    printf("Enter a sentence: ");
    gets(str);

    i = 0;
    while (str[i] != '\0') {
        // Skip spaces
        while (str[i] == ' ' && str[i] != '\0') i++;

        start = i;
        // Find end of word
        while (str[i] != ' ' && str[i] != '\0') i++;
        end = i - 1;

        // Reverse current word
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Modified sentence: %s", str);
    return 0;
}
