#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // size of array
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // array elements
    }

    int first = -1000000, second = -1000000; // assume very small initially

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("%d", second);
    return 0;
}
