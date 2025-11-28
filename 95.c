#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    // Taking input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Check length first
    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
