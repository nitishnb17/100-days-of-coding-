#include <stdio.h>

int main() {
    int n, i, a[100], pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("%d %d %d", pos, neg, zero);
    return 0;
}
