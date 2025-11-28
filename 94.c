#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len;

    // Taking input
    printf("Enter a sentence: ");
    gets(str);

    longest[0] = '\0';

    while (1) {
        j = 0;
        // Extract one word
        while (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        len = strlen(word);
        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }

        if (str[i] == '\0')
            break;
        i++; // Skip space
    }

    printf("Longest word: %s", longest);
    return 0;
}
