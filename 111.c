#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter k: ");
    if (scanf("%d", &k) != 1) return 0;

    if (k <= 0 || k > n) {
        printf("-1\n");
        return 0;
    }

    
    for (int i = 0; i <= n - k; i++) {
        int printed = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                printf("%d", arr[j]);
                printed = 1;
                break;  
            }
        }
        if (!printed) printf("0");
        if (i < n - k) printf(" "); 
    }
    printf("\n");
    return 0;
}
