#include <stdio.h>

int main() {
    int n, i, key, pos = 0;

    // Input size of array
    scanf("%d", &n);
    int arr[n+1]; // extra space for new element

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to insert
    scanf("%d", &key);

    // Find appropriate position
    for(i = 0; i < n; i++) {
        if(arr[i] > key) {
            pos = i;
            break;
        }
        pos = i+1;
    }

    // Shift elements to right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert key
    arr[pos] = key;

    // Print updated array
    for(i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
