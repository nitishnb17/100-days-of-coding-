#include <stdio.h>
#include <string.h>

int main() {
    char s[100005];                 
    if (!fgets(s, sizeof(s), stdin)) return 0;

    
    size_t L = strlen(s);
    if (L > 0 && s[L-1] == '\n') s[--L] = '\0';

    int lastSeen[256];
    for (int i = 0; i < 256; i++) lastSeen[i] = -1;

    int start = 0;                  
    int maxLen = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char c = (unsigned char)s[i];

        
        if (lastSeen[c] >= start) {
            start = lastSeen[c] + 1;
        }

        lastSeen[c] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
