#include <stdio.h>

int main() {
    int n, pos, element;
    
    // Input size
    scanf("%d", &n);
    
    int arr[100];  // taking max size for safety
    
    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position and element
    scanf("%d %d", &pos, &element);
    
    // Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert element
    arr[pos - 1] = element;
    n++;
    
    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
