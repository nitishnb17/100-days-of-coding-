#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    char result = '\0';

    // Taking input
    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {  // Second occurrence → repeating
                result = ch;
                break;
            }
        }
    }

    if (result != '\0')
        printf("%c", result);
    else
        printf("No repeating lowercase alphabet found");

    return 0;
}
