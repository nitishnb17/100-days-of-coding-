#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf(" %[^\n]", s); 

  
    if (s[0] != '\0') {
        s[0] = toupper(s[0]);
    }

    
    for (int i = 1; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }

    printf("%s\n", s);

    return 0;
}
