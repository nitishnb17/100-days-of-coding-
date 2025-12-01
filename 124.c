#include <stdio.h>

int main() {
    char srcFile[100], destFile[100];
    FILE *src, *dest;
    int ch;

    
    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);

  
    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file.\n");
        fclose(src);
        return 1;
    }

    
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully!\n");

    
    fclose(src);
    fclose(dest);

    return 0;
}
