#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n < 0) return 0;

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    
    for (int i = 0; i < n; i++) {
        int nge = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) { 
                nge = arr[j];
                break;           
            }
        }
        
        if (i == 0) printf("%d", nge);
        else printf(",%d", nge);
    }
    printf("\n");
    return 0;
}
