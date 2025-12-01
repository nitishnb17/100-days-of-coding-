#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    printf("Enter filename to append to: ");
    scanf("%s", filename);

    
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

  
    printf("Enter text to append: ");
    getchar();  
    fgets(text, sizeof(text), stdin);

  
    fputs(text, fp);

    printf("Text appended successfully!\n");

    
    fclose(fp);

    return 0;
}
