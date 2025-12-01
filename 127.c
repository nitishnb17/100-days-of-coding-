#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

  
    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(inFile);
        return 1;
    }

    
    while ((ch = fgetc(inFile)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);

        fputc(ch, outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Conversion complete. Output written to output.txt\n");
    return 0;
}
