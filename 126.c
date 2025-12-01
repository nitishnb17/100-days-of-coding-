#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    
    printf("Enter filename: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    
    printf("\n--- File Content ---\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
